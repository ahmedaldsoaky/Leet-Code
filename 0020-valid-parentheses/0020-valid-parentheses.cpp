class Solution {
public:
    bool isValid(string s) {
        string cls = "])}";
        string opn = "{[(";

        stack<char> st;
        for(char& c : s)
        {
            if(st.empty() && cls.contains(c))
                return false;
            if(opn.contains(c))
                st.push(c);
            else
            {
                if( (st.top() == '(') && (c == ')') )  st.pop();
                else if( st.top() == '[' && c == ']' ) st.pop();
                else if( st.top() == '{' && c == '}' ) st.pop();
                else return false;
            }
            if(!st.empty())
                cout<<st.top()<<endl;
        }
        return st.empty();
    }
};