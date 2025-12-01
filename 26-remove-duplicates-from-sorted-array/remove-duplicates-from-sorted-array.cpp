#include <bits/stdc++.h>;
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i =0; i < nums.size(); i++){
            mp[nums[i]] = 1;
        }
        int i =0;
        for(auto it: mp){
            nums[i] = it.first;
            i++;
        }
        return i;
    }
};