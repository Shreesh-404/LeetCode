class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
         Map<String,List<String>> stringListMap = new HashMap<>();

        for(String str: strs){
            char[] strsCharArray = str.toCharArray();
            Arrays.sort(strsCharArray);
            String strsSorted = new String(strsCharArray);

            stringListMap.putIfAbsent(strsSorted, new ArrayList<>());
            stringListMap.get(strsSorted).add(str);
        }
        return new ArrayList<>(stringListMap.values());
    }
}