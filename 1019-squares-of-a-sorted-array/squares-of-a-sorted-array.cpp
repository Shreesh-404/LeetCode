class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int l = 0, r = n - 1;
        int idx = n - 1;

        while (l <= r) {
            int leftSq = nums[l] * nums[l];
            int rightSq = nums[r] * nums[r];

            if (leftSq > rightSq) {
                res[idx--] = leftSq;
                l++;
            } else {
                res[idx--] = rightSq;
                r--;
            }
        }

        return res;
    }
};
