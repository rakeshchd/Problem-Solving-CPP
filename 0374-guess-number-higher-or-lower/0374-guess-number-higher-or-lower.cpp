/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s = 1, e = n; 
        int mid = s + (e-s)/2;
        int flag;
        while(s<=e){
            flag = guess(mid);
            if(flag == -1){
                e = mid-1;
            }else if(flag == 1){
                s = mid+1;
            }else if(flag == 0){
                return mid;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
};