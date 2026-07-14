class Solution {
public:
    int characterReplacement(string s, int k) {
        int mx = -1, n = s.size();
        for(int i = 0; i < 26; i++)
        {
            int l = 0, r = 0;
            char c = i+'A';
            int x = 0;
            while(r < n)
            {
                if(s[r] != c) x++;
                while(l < r && x > k)
                {
                    if(s[l] != c)x--;
                    l++;
                }
                mx = max(mx, ++r - l);
            }
        }
        return mx;
    }
};