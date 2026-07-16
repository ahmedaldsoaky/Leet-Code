class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";
        map<char, int> freq1, freq2;
        for(char& c : t) freq2[c]++;
        int need = freq2.size(), have = 0;
        pair<int, int> ans = {0, INT_MAX};
        int l = 0, r = 0;
        while(r < s.size())
        {
            freq1[s[r]]++;
            if(freq1[s[r]] == freq2[s[r]]) have++;
            while(have == need)
            {
                if((r - l) < (ans.second - ans.first))
                    ans = {l, r};

                if(freq1[s[l]] == freq2[s[l]]) have--;
                freq1[s[l++]]--;
            }
            r++;
        }
        string mn = "";
        if(ans.second != INT_MAX)
            mn = s.substr(ans.first, ans.second - ans.first + 1);
        return mn;
    }
};