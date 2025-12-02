#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t){
        unordered_map<char,int> mp;
        if(s.length() != t.length()) return false;
        bool res = true;
        for(int i =0; i < s.length(); i++){
            if(mp.find(s[i]) != mp.end()){
                mp[s[i]] = mp.at(s[i]) + 1;
            }else{
                mp[s[i]] = 1;
            }
        }
        for(int i =0; i < t.length(); i++){
            if(mp.find(t[i]) != mp.end()){
                mp[t[i]] = mp.at(t[i]) - 1;
            }else{
                res = false;
                break;
            }
        }
        for(auto it: mp){
            if(it.second != 0){
                res = false;
            }
        }
        if(!res) return false;
        else return true;
    }
};