class Solution {
     public int[] twoSum(int[] nums, int target) {

        Map<Integer, Integer> hashMap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int value = target -nums[i];
            if (hashMap.containsKey(value)){
                return new int[]{hashMap.get(value),i};
            }
            hashMap.put(nums[i], i);
        }
        return null;
    }
}