class Solution {
public:
    
    //Right Rotate = H-Flip + Transpose
    //Left Rotate = V- FLip + Transpose
    
    void flip_horizontal(vector<vector<int>>& matrix, int n){
        for(int i=0; i < n/2; i++){
            for(int j=0; j< n; j++){
                swap(matrix[i][j],matrix[n-1-i][j]);
            }
        }
    }
    
    void transpose(vector<vector<int>>& matrix, int n){
        for(int i=0; i < n; i++){
            for(int j=0; j < i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        flip_horizontal(matrix,n);
        transpose(matrix,n);
    }
};
