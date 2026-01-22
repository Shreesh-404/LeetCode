class Solution {
public:
    bool checkPalindrome(string& s) {
        int l = 0;
        int r = s.length()-1;
        bool isPalindrome = true;
        while (l < r)   
        {
            if(s[l] != s[r]){
                isPalindrome = false;
                break;
            }
            l++;
            r--;
        }
        return isPalindrome;
    }

    string firstPalindrome(vector<string>& words) {
        for(string word : words){
            if(checkPalindrome(word)){
                return word;
            }
        }
        return "";
    }
};