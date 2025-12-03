class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums);
        for(int i=0; i < nums.size(); i++){
            result.emplace_back(nums[i]);
        }
        return result;
    }
};