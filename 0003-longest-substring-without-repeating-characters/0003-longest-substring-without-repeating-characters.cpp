class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int l = 0, r = 0, mx = 0;
        while(r < s.size())
        {
            while(mp[s[r]])mp[s[l++]]--;
            mp[s[r++]]++;
            mx = max(mx, r - l);
        }
        return mx;
    }
};