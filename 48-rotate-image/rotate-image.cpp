class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> finalMat;
        for (int a = 0; a < matrix.size(); a++)
        {
            vector<int> temp;
            for (int i = matrix.size()-1; i >= 0; i--)
            {
                temp.push_back(matrix[i][a]);
            }
            finalMat.push_back(temp);
        }
        matrix = finalMat;
    }
};