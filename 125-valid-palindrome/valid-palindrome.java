class Solution {
    public boolean isPalindrome(String s) {
        String lowerS = s.toLowerCase();
        int i = 0;
        int j = lowerS.length() -1;

        while (i<j){
            char left = lowerS.charAt(i);
            char right = lowerS.charAt(j);

            if (!(left>='a' && left<='z')){
                if(!(left>= '0' && left<='9')){
                    i++;
                    continue;
                }
            }
            if (!(right>='a' && right<='z')){
                if(!(right>= '0' && right<='9')){
                    j--;
                    continue;
                }
            }

            if (left!=right){
                return false;
            } 
            
            i++;
            j--;
            
        }
        return true;
    }
}