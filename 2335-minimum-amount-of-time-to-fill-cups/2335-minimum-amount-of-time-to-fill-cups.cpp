class Solution {
public:
    int fillCups(vector<int>& amount) {
        int seconds = 0;
        sort(amount.begin(), amount.end(), greater<int>());
        while(amount[0]>0 && amount[1]>0){
            amount[0] -= 1;
            amount[1] -= 1;
            seconds++;
            sort(amount.begin(), amount.end(), greater<int>());
        }
        while(amount[2]>0 && amount[1]>0){
            amount[2] -= 1;
            amount[1] -= 1;
            seconds++;
            sort(amount.begin(), amount.end(), greater<int>());
        }
        return seconds + amount[0];
    }
};