class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int l=0, r=n-1;
        while(r-l >= k){
            if(abs(arr[l]-x)>abs(arr[r]-x)) l++;
            else r--;
        }
        vector<int> v(arr.begin()+l, arr.begin()+r+1);
        sort(v.begin(), v.end(), [x](int a, int b){
            return abs(a-x)<abs(b-x) || (abs(a-x)==abs(b-x) && a<b);
        });
        // v.resize(k);
        sort(v.begin(), v.end());
        return v;
    }
};