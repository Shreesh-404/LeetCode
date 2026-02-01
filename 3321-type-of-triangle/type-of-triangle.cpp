class Solution {
public:
    string triangleType(vector<int>& nums) {

        int large = max(max(nums[0], nums[1]), nums[2]);
        if(nums[0] + nums[1] + nums[2] - large <= large){
            return "none";
        }

        if(nums[0] == nums[1]){
            if(nums[0] == nums[2]){
                return "equilateral";
            }else{
                return "isosceles";
            }
        }else if(nums[0] == nums[2]){
            return "isosceles";
        }else if(nums[1] == nums[2]){
            return "isosceles";
        }else{
            return "scalene";
        }

        return "none";
    }
};