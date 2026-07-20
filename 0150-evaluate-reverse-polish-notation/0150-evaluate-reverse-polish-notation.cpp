class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int ans = 0;
        for(string s : tokens)
        {
            if(s.size() == 1 && !isdigit(s[0]))
            {
                int f = stoi(st.top());
                st.pop();
                int se = stoi(st.top());
                st.pop();
                int res = 0;
                if(s[0] == '/')
                    res = se/f;
                else if(s[0] == '+')
                    res = se+f;
                else if(s[0] == '-')
                    res = se-f;
                else
                    res = se*f;
                st.push(to_string(res));
                cout<<f<<' '<<se<<endl;
                cout << res << endl;
                ans = res;
            }
            else
                st.push(s), ans = stoi(s);
        }
        return ans;
    }
};