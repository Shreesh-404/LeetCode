class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> check;
        int output = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(check.count(nums[i])){
                output = nums[i];
                break;
            }
            check.insert(nums[i]);
        }
        return output;
    }
};