class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<int,unordered_set<char>> col;
        unordered_map<int, unordered_set<char>> cube;
        
        for (int i = 0; i < board.size(); i++)
        {
            unordered_set<char> row;

            for (int j = 0; j < board[i].size(); j++)
            {

                if(board[i][j] == '.'){
                    continue;
                }

                char num = board[i][j];

                // Row Check
                if(row.count(num)) return false;
                row.insert(num);

                // Column Check
                if(col[j].count(num)) return false;
                col[j].insert(num);

                // Cube Check
                if (j < 3){
                    if(cube[0].count(num)) return false;
                    cube[0].insert(num);
                }else if (j < 6){
                    if(cube[1].count(num)) return false;
                    cube[1].insert(num);
                }else{
                    if(cube[2].count(num)) return false;
                    cube[2].insert(num);
                }
            }
            if(i == 2 || i == 5 || i == 8){
                cube.clear();
            }
        }
        return true;
    }
};