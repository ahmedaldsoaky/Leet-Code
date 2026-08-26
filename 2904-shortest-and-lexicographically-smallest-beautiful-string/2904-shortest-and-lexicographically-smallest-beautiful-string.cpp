class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        if (ranges::count(s, '1') < k) {
            return "";
        }

        string ans = s;
        int c = 0;
        int l = 0, r = 0, n = s.size();
        while(r < n)
        {
            c += s[r]-'0';
            while(c > k || s[l] == '0')
            {
                if(s[l] == '1') c--;
                l++;
            }
            if(c == k)
            {
                string m = s.substr(l, r - l + 1);
                if(m.size() < ans.size() || (m.size() == ans.size() && m < ans))
                    ans = m;
            }
            r++;
        }
        return ans;
        // deque<char> dq;
        // int c = 0;
        // string res = "";
        // for(char &ch : s)
        // {
        //     dq.push_back(ch);
        //     if(ch == '1')c++;
        //     while(c > k || dq.front() == '0')
        //     {
        //         if(dq.front() == '1') c--;
        //         dq.pop_front();
        //     }
        //     if(c == k)
        //     {
        //         string m(dq.begin(), dq.end());
        //         if(!res.size() || m.size() < res.size() || (m.size() == res.size() && m < res))
        //             res = m;
        //     }
        // }
        // return res;
    }
};