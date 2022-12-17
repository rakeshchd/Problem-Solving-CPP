class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if(s.length() & 1) return false;
        stack<char> st;
        // st.push('a');
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }else if((s[i]==')' || s[i]==']' || s[i]=='}') && st.empty()){
                return false;
            }else if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{')){
                st.pop();
            }else{
                return false;
            }
        }
        // if(st.size()!=1) return false;
        // return true;
        if(st.empty()) return true;
        return false;
    }
};