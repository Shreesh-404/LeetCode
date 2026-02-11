class Solution {
public:
    int findMax(const vector<int>& v) {
        int maxE = INT_MIN;
        for (int x : v) {
            maxE = max(maxE, x);
        }
        return maxE;
    }

    int calculateTotalHours(const vector<int>& v, int hourly) {
        int totalH = 0;
        for (int x : v) {
            totalH += (x + hourly - 1) / hourly;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);

        while (low < high) {
            int mid = low + (high - low) / 2;
            int hours = calculateTotalHours(piles, mid);

            if (hours <= h) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
