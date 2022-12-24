class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        vector<vector<int>> sna;
        for(int i=0; i<rowIndex+1; i++ ){
            vector<int> v(i+1, 1);
            for(int j=1; j<i; j++){
                v[j] = sna[i-1][j] + sna[i-1][j-1];
            }
            sna.push_back(v);
            if(i == rowIndex){
                return v;
            }
        }
        return ans;
    }
};