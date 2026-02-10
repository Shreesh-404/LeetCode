class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix.size();
        while(i < j){
            if(matrix[i][matrix[i].size()-1] >= target){
                if(target == matrix[i][matrix[i].size()-1]){
                    return true;
                }
                int tempLeft = 0;
                int tempRight = matrix[i].size() - 1;
                while(tempLeft <= tempRight){
                    int mid = (tempLeft + tempRight)/2;
                    if(target == matrix[i][mid]){
                        return true;
                    }else if(target > matrix[i][mid]){
                        tempLeft = mid + 1;
                    }else{
                        tempRight = mid - 1;
                    }
                }
            }
            i++;
        }
        return false;
    }
};