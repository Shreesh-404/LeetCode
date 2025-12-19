class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        int f = 0;
        while (i < haystack.length())
        {
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == needle.length()) return f;
            }else{
                i = f+1;
                f = i;
                j = 0;
            }
        }
        return -1;
    }
};