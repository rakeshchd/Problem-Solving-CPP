class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int a = original.size();
        vector<vector<int>> newMatrix;
        vector<vector<int>> newMat(m, vector<int>(n,0));
        if(a == m*n){
            for(int i=0; i<m*n; i++) newMat[i/n][i%n] = original[i];
        }else{
            return newMatrix;
        }
        return newMat;
    }
};