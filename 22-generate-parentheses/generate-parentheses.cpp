void backTrack(string& temp, vector<string>& res, int n, int open, int close){
    if(temp.length() == 2*n){
        res.push_back(temp);
        return;
    }

    if(open < n){
        temp.push_back('(');
        backTrack(temp, res, n, open+1, close);
        temp.pop_back();
    }

    if(close < open){
        temp.push_back(')');
        backTrack(temp, res, n, open, close+1);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;
        int open = 0;
        int close = 0;

        backTrack(temp, res, n, open, close);

        return res;
    }
};