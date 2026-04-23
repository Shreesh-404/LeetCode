void subSet(int i, vector<int>& nums, vector<vector<int>> &output, vector<int> &temp){
    if(i == nums.size()){
        output.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
    subSet(i+1, nums, output, temp);
    temp.pop_back();

    subSet(i+1, nums, output, temp);
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp;
        subSet(0, nums, output, temp);
        return output;
    }
};