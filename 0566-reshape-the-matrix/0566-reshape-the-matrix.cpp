class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n > r*c || m*n < r*c){
            return mat;
        }
        vector<int> fun;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                fun.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> new_matrix(r, vector<int>(c, 0));
        int k = 0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                new_matrix[i][j] = fun[k];
                k++;
            }
        }
        // for(int i=0; i<r*c; i++) new_matrix[i/c][i%c] = mat[i/n][i%n];
        return new_matrix;
    }
};