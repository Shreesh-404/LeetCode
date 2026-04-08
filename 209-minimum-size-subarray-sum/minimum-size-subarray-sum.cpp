class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int count = 0;
        int res = INT_MAX;
        int sum = 0;
        while (j < nums.size())
        {
            sum += nums[j];
            count++;
            while(sum >= target){
                res = min(res,count);
                sum -= nums[i];
                count--;
                i++;
            }
            j++;    
        }
        if(res == INT_MAX) return 0;
        else return res;
    }
};