class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        for(int i=0; i<n; i++){
            int j=i+1; 
            while(j<n && nums[i]<nums[j]){
                maxi = max(maxi, nums[j]-nums[i]);
                j++;
            }
        }
        return maxi;
    }
};