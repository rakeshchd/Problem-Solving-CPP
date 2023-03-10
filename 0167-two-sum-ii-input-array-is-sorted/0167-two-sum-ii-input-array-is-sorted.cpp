class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        int s = 0, e = n-1;
        while(s<=e){
            if(numbers[s] + numbers[e] == target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                return ans;
            }else if(numbers[s] + numbers[e] > target){
                e--;
            }else{
                s++;
            }
        }
        return ans;
    }
};