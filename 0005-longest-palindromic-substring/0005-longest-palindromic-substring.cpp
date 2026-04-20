class Solution {
public:
    string longestPalindrome(string s) {
        map<int, int> mp;
        for(auto c : s)mp[c]++;
        int n = s.size(), mx = 0;
        string ans = "";
        for(int i = 0; i < n; i ++)
        {
            if(mp[s[i]] > 1)
            {
                string m = "";
                m+=s[i];
                int j = i+1;
                for(int k = 0; k < mp[s[i]]-1; k++)
                {
                    while(j < n && s[j] != s[i]) m+=s[j++];
                    if(j < n)
                        m+=s[j++];
                    if(is_palindrom(m))
                    {
                        if(mx < m.size())
                        {
                            mx = m.size();
                            ans = m;
                        }
                    }
                }
                
            }
            mp[s[i]]--;
        }
        if(!ans.size())
            ans.push_back(s[0]);
        return ans;
    }
    bool is_palindrom(string s)
    {
        int i = 0, j = s.size()-1;
        while(i < j)
        {
            if(s[i] != s[j]) return false;
            i++, j--;
        }
        return true;
    }
};