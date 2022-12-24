class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n > r*c || m*n < r*c){
            return mat;
        }
        vector<vector<int>> new_matrix(r, vector<int>(c, 0));
        for(int i=0; i<r*c; i++) new_matrix[i/c][i%c] = mat[i/n][i%n];
        return new_matrix;
    }
};