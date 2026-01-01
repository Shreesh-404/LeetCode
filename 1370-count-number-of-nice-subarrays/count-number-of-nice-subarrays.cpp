#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int atMost(vector<int>& nums, int k){

        if(k < 0) return 0;

        vector<int> temp;
        for(auto it: nums){
            if(it%2 == 1){
                temp.push_back(1);
            }else{
                temp.push_back(0);
            }
        }

        int l = 0;
        int r = 0;
        int sum = 0;
        int res = 0;

        while (r < temp.size())
        {
            sum += temp[r];
            while (sum > k)
            {
                sum = sum - temp[l];
                l++;
            }
            res = res + (r - l + 1);
            r++;
        }
        return res;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};