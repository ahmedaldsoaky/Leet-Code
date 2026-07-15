class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        int freq1[26] = {}, freq2[26] = {};
        for(char c : s1) freq1[c-'a']++;
        int l = 0, r = 0;
        while(r < s2.size())
        {
            freq2[s2[r++] - 'a']++;
            if(r - l == s1.size())
                if(check(freq1, freq2)) return true;
            if(r - l >= s1.size())
                freq2[s2[l++] - 'a']--;
        }
        return false;
    }
    bool check(int freq1[26], int freq2[26])
    {
        for(int i = 0; i < 26; i++) if(freq1[i] != freq2[i]) return false;
        return true;
    }
};