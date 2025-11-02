class Solution {
    public int removeDuplicates(int[] nums) {
        int[] temp = new int[nums.length];
        int k = 0;
        int j = 1;
        temp[k] = nums[k];
        for (int i = 1; i < nums.length; i++) {
            if (!(nums[k] == nums[i])){
                temp[j] = nums[i];
                k = i;
                j++;
            }
        }
        System.out.println(Arrays.toString(temp));
        for (int i = 0; i < nums.length; i++) {
            nums[i] = temp[i];
        }
        System.out.println(Arrays.toString(nums));
        return j;
    }
}