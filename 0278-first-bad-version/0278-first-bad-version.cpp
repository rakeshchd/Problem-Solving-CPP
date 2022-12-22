// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1, e = n;
        int ans = 0;
        int mid = s + (e-s)/2;
        while(s<=e){
            bool flag = isBadVersion(mid);
            if(flag == false){
                s = mid+1;
            }else if(flag == true){
                e = mid-1;
                ans = mid;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};