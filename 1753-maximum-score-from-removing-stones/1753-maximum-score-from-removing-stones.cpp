class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int score = 0;
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end(), greater<int>());
        while(v[0]>0 && v[1]>0){
            v[0] -= 1;
            v[1] -= 1;
            score++;
            sort(v.begin(), v.end(), greater<int>());
        }
        // while(v[1]>0 && v[2]>0){
        //     v[1] -= 1;
        //     v[2] -= 1;
        //     score++;
        //     sort(v.begin(), v.end(), greater<int>());
        // }
        return score;
    }
};