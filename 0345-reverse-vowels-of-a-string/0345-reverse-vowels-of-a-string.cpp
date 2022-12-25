class Solution {
public:
    string reverseVowels(string s) {
        int i=0, e=s.size()-1;
        while(i<e){
            bool flag1=false , flag2=false;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                flag1 = true;
            }
            if(s[e]=='a' || s[e]=='e' || s[e]=='i' || s[e]=='o' || s[e]=='u' || s[e]=='A' || s[e]=='E' || s[e]=='I' || s[e]=='O' || s[e]=='U' ){
                flag2 = true;
            }
            
            if(flag1 && flag2){
                swap(s[i++], s[e--]);
            }
            
            if(!flag1) i++;
            if(!flag2) e--;
        }
        return s;
    }
};