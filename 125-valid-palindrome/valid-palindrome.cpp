#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        bool rushil = true;
        for(int i =0; i< s.length(); i++){
            if(!(s[i]>='A' && s[i]<='Z')){
                if(!(s[i]>='a' && s[i]<='z')){
                    if(!(s[i] >= '0' && s[i] <= '9' )){
                        continue;   
                    }
                }
            }
            t += tolower(s[i]);
        }
        if(t.length() == 1) return true;
        int i = 0;
        int j = t.length()-1;
        while (j>i)
        {
            if(t[i] != t[j])
            {
                rushil = false;
                break;
            }
            i++;
            j--;
        }
        if(rushil) return true;
        else return false;
    }
};