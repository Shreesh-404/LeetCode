class Solution {
    public String longestCommonPrefix(String[] strs) {
        int minLen = 201;
        String result = "";
        if(strs.length == 1){
            return strs[0];
        }
        for (int i = 0; i < strs.length; i++) {
           minLen = Math.min(minLen, strs[i].length());
        }
        for (int i = 0; i <minLen; i++) {
            char temp = strs[0].charAt(i);
            for (int z = 0; z < strs.length; z++) {
                if(strs[z].charAt(i) != temp) return result;
            }
            result = result + strs[0].charAt(i);
        }
        return result;
    }
}