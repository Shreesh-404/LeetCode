#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        bitset<32> b(n);
        for (int i = 0; i < b.size(); i++)
        {
            if(b[i] == 1){
                count++;
            }
        }
        return count;
    }
};