class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        long long ans = 0;

        int sub = nums.size()/2;

        for(int i = 0; i < nums.size(); i++){
            if(sub != 0){
                ans -= nums[i]*nums[i];
                sub--;
            }else{
                ans += nums[i]*nums[i];
            }
        }

        return ans;
    }
};