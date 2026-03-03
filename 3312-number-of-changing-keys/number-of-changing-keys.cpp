#include <cctype>

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        char c  = tolower(s[0]);
        for(int i = 1; i < s.length(); i++){
            char temp = tolower(s[i]);
            if(c != temp){
                c = temp;
                count++;
            }
        }
        return count;
    }
};