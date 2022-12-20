class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int i=0;
        int j = nums.size()-1;
        for(i; i<nums.size(); i++){
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
        }
        for(j; j>=i; j--){
            if(nums[j]==target){
                ans.push_back(j);
                break;
            }
        } 
        if(ans.size()==1){
            ans.push_back(-1);
        }
        return ans;
    }
};