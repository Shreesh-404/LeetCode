#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int copy = x;
        long ans =0;
        while (copy>0)
        {
            int temp = copy%10;
            ans = ans*10 + temp;
            copy /= 10;
        }
        return ans==x;
    }
};