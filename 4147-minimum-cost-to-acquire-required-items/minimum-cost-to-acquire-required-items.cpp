#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;

        long long k = min(need1, need2);

        if ((long long)costBoth < (long long)cost1 + cost2) {
            ans += k * costBoth;
            need1 -= k;
            need2 -= k;
        }

        long long option1 =
            (long long)need1 * cost1 + (long long)need2 * cost2;

        long long option2 =
            (long long)max(need1, need2) * costBoth;

        ans += min(option1, option2);

        return ans;
    }
};
