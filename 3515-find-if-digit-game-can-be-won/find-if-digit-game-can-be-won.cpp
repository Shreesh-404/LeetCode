class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle = 0;
        int sumDouble = 0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] <= 9){
                sumSingle += nums[i];
            }else{
                sumDouble += nums[i];
            }
        }
        if(sumSingle != sumDouble){
            return true;
        }else{
            return false;
        }
    }
};