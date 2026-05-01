void findSum(int i, vector<int>& cand, vector<int>& temp, 
             vector<vector<int>>& res, int target) {

    if(target == 0){
        res.push_back(temp);
        return;
    }

    for(int j = i; j < cand.size(); j++) {

        if(j > i && cand[j] == cand[j-1]) continue;

        if(cand[j] > target) break;

        temp.push_back(cand[j]);
        findSum(j + 1, cand, temp, res, target - cand[j]);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> temp;

        findSum(0, candidates, temp, res, target);
        return res;
    }
};