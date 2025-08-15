class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> hashSet = new HashSet<>();
        for (int e: nums)
            hashSet.add(e);
        
        return hashSet.size()!= nums.length;
    }
}