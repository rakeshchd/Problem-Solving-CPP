class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt[26] = {0};
        for(int i=0; i<s.size(); i++){
            cnt[int(s[i]-'a')]++;
        }
        for(int i=0; i<t.size(); i++){
            cnt[int(t[i]-'a')]--;
        }
        for(int i=0; i<26; i++){
            if(cnt[i]>0 || cnt[i]<0) return false;
        }
        return true;
    }
};