class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(), mx = 0;
        string ans = "";
        for(int i = 0; i < n; i ++)
        {
            int l = i-1, r = i+1;
            while(r < n && s[r] == s[i]) r++;
            while(l >= 0 && s[l] == s[i]) l--;
            while(l >= 0 && r < n && s[l] == s[r])
                l--, r++;
            if(mx < r - l + 1)
            {
                mx = r - l + 1;
                ans = s.substr(l + 1, mx-2);
            }
        }
        return ans;
    }
};