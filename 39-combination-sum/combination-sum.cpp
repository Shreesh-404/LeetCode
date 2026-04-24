void findSum(int i, vector<int> cand, vector<int> &temp, vector<vector<int>> &res, int target){
    if(target == 0){
        res.push_back(temp);
        return;
    }

    if(i == cand.size() || target < 0) return;

    temp.push_back(cand[i]);
    findSum(i , cand, temp, res, target - cand[i]);
    temp.pop_back();

    findSum(i+1 , cand, temp, res, target);
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        findSum(0, candidates, temp, res, target);
        return res;
    }
};