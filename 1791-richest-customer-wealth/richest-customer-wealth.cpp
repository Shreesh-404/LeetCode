class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        unordered_set<int> set;
        
        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            set.insert(sum);
        }
        
        int res = INT_MIN;
        for (int e : set) {
            res = max(res, e);
        }

        return res;
    }
};