class Solution {
    public int longestConsecutive(int[] nums) {
        int[] sortedNums = nums.clone();
        if (nums.length == 0) return 0;
        int longest = 1;
        int currentStreak = 1;
        Arrays.sort(sortedNums);
        for (int i = 1; i < nums.length; i++){
            if (sortedNums[i] == sortedNums[i-1]){
                continue;
            }else if (sortedNums[i] == sortedNums[i-1]+1){
                currentStreak++;
                longest = Math.max(longest,currentStreak);
            }else currentStreak =1;
        }
        return longest;
    }
}