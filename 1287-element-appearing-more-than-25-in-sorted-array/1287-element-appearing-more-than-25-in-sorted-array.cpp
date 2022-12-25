class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int maxi =0;
        int n = arr.size();
        int ans;
        int cnt =1;
        if(n==1) return arr[0];
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                cnt++;
            }else{
                if(4*cnt > n){
                    maxi = max(maxi, cnt);
                    ans = arr[i];
                }
                cnt = 1;
            }
            if(i == n-2 && cnt > maxi){
                return arr[n-2];
            }
        }
        return ans;
    }
};