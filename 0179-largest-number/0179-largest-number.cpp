class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> num_strs;
        for (auto num : nums) {
            num_strs.push_back(to_string(num));
        }
        sort(num_strs.begin(), num_strs.end(), [](string &a, string &b) {
            return a + b > b + a;
        });
        string result;
        if(num_strs[0]=="0") {
            return "0";
        }
        for (auto num_str : num_strs) {
            result += num_str;
        }
        return result;
    }
};