class Solution {
    public long maxTotalValue(int[] nums, int k) {
        long Max = 0;
        long Min = nums[0];
        for(int e: nums){
            Max = Math.max(Max,e);
            Min = Math.min(Min,e);
        }
        return (Max-Min)*k;
    }
}