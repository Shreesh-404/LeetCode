class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer,Integer> integerFreqMap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int freq = 1;
            if (integerFreqMap.containsKey(nums[i]))
                integerFreqMap.replace(nums[i], integerFreqMap.get(nums[i])+1);
            else integerFreqMap.put(nums[i],freq);
        }
        int greater = 0;
        for (int e: integerFreqMap.values()){
            greater = Math.max(greater,e);
        }
        int output = 0;
        for(int e: integerFreqMap.keySet()){
            if (integerFreqMap.get(e) == greater) output = output + greater;
        }
        return output;
    }
}