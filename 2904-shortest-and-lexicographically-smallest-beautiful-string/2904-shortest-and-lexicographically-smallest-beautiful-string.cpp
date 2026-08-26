class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        deque<char> dq;
        int c = 0, n = s.size();
        string res = "";
        for(char &ch : s)
        {
            dq.push_back(ch);
            if(ch == '1')c++;
            while(c > k || dq.front() == '0')
            {
                if(dq.front() == '1') c--;
                dq.pop_front();
            }
            if(c == k)
            {
                string m = "";
                for(char& c : dq) m += c;
                if(!res.size() || m.size() < res.size() || (m.size() == res.size() && m < res))
                    res = m;
            }
        }
        return res;
    }
};