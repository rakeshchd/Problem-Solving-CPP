class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff = INT_MAX;
        int closest_sum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum>target) k--;
                else if(sum<target) j++;
                else return sum;
                int diff = abs(sum - target);
                if(diff < min_diff){
                    min_diff = diff;
                    closest_sum = sum;
                }
            }
        }
        return closest_sum;
    }
};