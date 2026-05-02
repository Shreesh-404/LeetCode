void genSubsets(int ind, vector<int> nums, vector<int>& temp, vector<vector<int>>& res){
    if(ind >= nums.size()){
        for(auto it: res){
            if(it == temp) return;
        }
        res.push_back(temp);
        return;
    }

    temp.push_back(nums[ind]);
    genSubsets(ind + 1, nums, temp, res);
    temp.pop_back();

    genSubsets(ind + 1, nums, temp, res);
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> temp;

        genSubsets(0, nums, temp, res);

        return res;
    }
};