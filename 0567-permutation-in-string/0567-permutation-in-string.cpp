class Solution {
public:
    bool checkInclusion(string s1, string s2){
        int m[26] = {0};
        for(int i=0; i<s1.size(); i++) m[s1[i]-'a']++;
        int j=0, i=0,total_chars = s1.size();
        while(j<s2.size()){
            if(m[s2[j++]-'a']-- > 0) 
                total_chars--;
            if(total_chars==0) return true;
            if(j-i == s1.size() && m[s2[i++]-'a']++ >= 0)
                total_chars++;
        }
        return false;
    }
};