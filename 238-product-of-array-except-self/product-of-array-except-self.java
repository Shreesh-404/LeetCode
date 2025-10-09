class Solution {
    public int[] productExceptSelf(int[] nums) {
        int product = 1;
        int olo = 0;
        boolean check = false;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0){
                olo++;
                check = true;
                continue;
            }
            product = product*nums[i];

        }
        int[] result = new int[nums.length];
        for (int i = 0; i < result.length; i++) {
            if (olo > 1){
                result[i] = 0;
                continue;
            }
            if (nums[i] == 0){
                result[i] = product;
            }else {
                if (check){
                    result[i] = 0;
                }else {
                    result[i] = product/nums[i];
                }
            }
        }
        return result;
    }
}