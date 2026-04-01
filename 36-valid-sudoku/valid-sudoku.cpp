class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<int, unordered_set<char>> col;
        unordered_map<int, unordered_set<char>> cube;
        
        for (int i = 0; i < 9; i++) {

            unordered_set<char> row;

            for (int j = 0; j < 9; j++) {

                if(board[i][j] == '.') continue;

                char num = board[i][j];

                // Row check
                if(row.count(num)) return false;
                row.insert(num);

                // Column check
                if(col[j].count(num)) return false;
                col[j].insert(num);

                // Cube check
                int box = (i/3)*3 + j/3;

                if(cube[box].count(num)) return false;
                cube[box].insert(num);
            }
        }

        return true;
    }
};