class Solution {
public:
    int strStr(string haystack, string needle) {
    if (needle.empty()) {
        return 0;
    }
    if (needle.length() > haystack.length()) {
        return -1;
    }
    
    int i = 0, j = 0;
    
    while (i < haystack.length() && j < needle.length()) {
        if (haystack[i] == needle[j]) {
            i++;
            j++;
        } else {
            i = i - j + 1;
            j = 0;
        }
    }
    
    if (j == needle.length()) {
        return i - j;
    } else {
        return -1;
    }
}
};