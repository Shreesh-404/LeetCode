void comb(int ind, vector<int> nums, vector<int>& temp, vector<vector<int>>& res, vector<int>& used){
    if(temp.size() == nums.size()){
        res.push_back(temp);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if(used[i]) continue;

        used[i] = 1;
        temp.push_back(nums[i]);

        comb(ind + 1, nums, temp, res, used);

        temp.pop_back();
        used[i] = 0;
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> used(nums.size(), 0);

        comb(0, nums, temp, res, used);

        return res;
    }
};