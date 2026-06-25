class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) return s;
        
        int start = 0, maxLen = 1;
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            int len1 = r - l - 1;
            
            l = i; 
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            int len2 = r - l - 1;
            
            int currentLen = max(len1, len2);
            if (currentLen > maxLen) {
                maxLen = currentLen;
                start = i - (currentLen - 1) / 2;
            }
        }
        
        return s.substr(start, maxLen);
    }
};