//Solution 1 O(m*n) Brute Force

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(target == matrix[i][j]){
                    return true;
                }
            }
        }
        return false;
    }
};

//Solution 2 O(m+n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = -1, m = matrix.size(), n = matrix[0].size();
        for(int i = m-1; i >= 0; i--){
            if(target <= matrix[i][n-1]){
                row = i;
            }
        }
        
        if(row == -1) return false;
        else{
            for(int i=0; i < n; i++){
                if(target == matrix[row][i]){
                    return true;
                }
            }
        }
        
        for(int i=0; i < n; i++){
            if(target == matrix[row][i]){
                return true;
            }
        }
        
        return false;
    }
};
