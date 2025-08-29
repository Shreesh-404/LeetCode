class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer,Integer> integerMap = new HashMap<>();
        for (int i = 0; i < nums.length ; i++) {
            if (integerMap.containsKey(nums[i])) {
                integerMap.replace(nums[i], (integerMap.get(nums[i])+1));
                continue;
            }
            integerMap.put(nums[i],1);
        }
        int[] answer = new int[k];
        List<Map.Entry<Integer,Integer>> list = new ArrayList<>(integerMap.entrySet());
        list.sort((e1, e2) -> e2.getValue().compareTo(e1.getValue()));
        for (int i = 0; i < answer.length; i++) {
            answer[i] = list.get(i).getKey();
        }
        return answer;
    }
}