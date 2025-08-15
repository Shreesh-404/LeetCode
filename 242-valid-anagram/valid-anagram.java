class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length())
            return false;
        Map<Character,Integer> hashMap1 = new HashMap<>();
        Map<Character,Integer> hashMap2 = new HashMap<>();

        for (int i =0; i<s.length(); i++){
            if (hashMap1.containsKey(s.charAt(i)))
                hashMap1.replace(s.charAt(i),hashMap1.get(s.charAt(i))+1);
            else
                hashMap1.put(s.charAt(i),1);
        }
        for (int j =0; j<t.length(); j++){
            if (hashMap2.containsKey(t.charAt(j)))
                hashMap2.replace(t.charAt(j),hashMap2.get(t.charAt(j))+1);
            else
                hashMap2.put(t.charAt(j),1);
        }
        Set<Character> keys = hashMap1.keySet();
        int i =0;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (hashMap1.containsKey(ch) && hashMap2.containsKey(ch)){
                if (hashMap1.get(ch).equals(hashMap2.get(ch))){

                }else return false;
                
            }else if (hashMap1.containsKey(ch) == hashMap2.containsKey(ch)){
                continue;
            }else return false;
        }
        return true;
    }
}