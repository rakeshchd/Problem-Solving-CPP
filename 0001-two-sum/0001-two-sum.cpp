class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> pair;
        for(int i=0; i<nums.size(); i++){
            if(pair.find(target - nums[i]) != pair.end()){
                result.push_back(i);
                result.push_back(pair[target - nums[i]]);
                return result;
            }
            pair[nums[i]]=i;
        }
        return result;
    }
};