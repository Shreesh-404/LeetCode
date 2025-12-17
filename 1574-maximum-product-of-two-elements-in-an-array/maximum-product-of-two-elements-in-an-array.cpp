#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int highest = 0;
        int index = 0;
        int multi = 0;
        for (int i =0; i < nums.size(); i++){
            if(nums[i] > highest){
                highest = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == index) continue;
            int x = (highest-1)*(nums[i]-1);
            multi = max(multi,x);
        }
        return multi;
    }
};