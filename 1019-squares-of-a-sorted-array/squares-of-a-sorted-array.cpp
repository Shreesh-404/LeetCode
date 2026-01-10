class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for(int e : nums){
            res.push_back(e*e);
        }
        sort(res.begin(), res.end());
        return res;
    }
};