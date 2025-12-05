#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i >= 0; i--){
           int temp = digits[i];
           if(i == 0){
            if(digits[i] == 9){
                digits[i] = 1;
                digits.emplace_back(0);
                break;
            }
           }
           if((temp + 1) > 9){
            digits[i] = 0;
            continue;
           }else{
            digits[i] += 1;
            break;
           }
        }
        return digits;
    }
};