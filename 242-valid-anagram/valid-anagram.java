class Solution {
    public boolean isAnagram(String s, String t) {
        char[] charArray1 = s.toCharArray();
        char[] charArray2 = t.toCharArray();
        Arrays.sort(charArray1);
        Arrays.sort(charArray2);
        String sortedS = new String(charArray1);
        String sortedT = new String(charArray2);
        if (sortedS.equals(sortedT)){
            return true;
        }else
            return false;
    }
}