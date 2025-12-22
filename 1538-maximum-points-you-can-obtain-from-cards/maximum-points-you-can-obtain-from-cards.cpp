class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0;
        int rightSum = 0;
        int maxSum = 0;
        for (int i = 0; i < k; i++)
        {
            leftSum += cardPoints[i];
        }
        maxSum = leftSum;
        int rightIdx = cardPoints.size()-1;
        for (int i = k-1; i >= 0; i--)
        {
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[rightIdx];
            maxSum = max(maxSum, leftSum + rightSum);
            rightIdx--;
        }
        return maxSum;
    }
};