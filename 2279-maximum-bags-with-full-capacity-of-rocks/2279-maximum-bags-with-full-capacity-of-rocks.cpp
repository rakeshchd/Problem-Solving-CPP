class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        int cnt = 0;
        vector<int> spaceLeft(n, 0);
        for(int i =0; i<n; i++){
            spaceLeft[i] = capacity[i] - rocks[i];
        }
        sort(spaceLeft.begin(), spaceLeft.end());
        for(int i =0; i<n; i++){
            if(additionalRocks >= spaceLeft[i]){
                additionalRocks -= spaceLeft[i];
                cnt ++;
            }
        }
        return cnt;
    }
};