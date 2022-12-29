class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int temp, sum=0;
        for(int i=0; i<piles.size(); i++){
            pq.push(piles[i]);
            sum+=piles[i];
        }
        while(k--){
            int temp = pq.top();
            pq.pop();
            sum-=temp/2;
            pq.push(temp-temp/2);
        }
        return sum;
    }
};