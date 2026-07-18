class Solution {
public:
    bool isValid(string s) {
        string cls = "])}";
        string opn = "{[(";

        string st;
        for(char& c : s)
        {
            if(st.empty() && cls.contains(c))
                return false;
            if(opn.contains(c))
                st+=c;
            else
            {
                if( (st.back() == '(') && (c == ')') )  st.pop_back();
                else if( st.back() == '[' && c == ']' ) st.pop_back();
                else if( st.back() == '{' && c == '}' ) st.pop_back();
                else return false;
            }
            if(!st.empty())
                cout<<st.back()<<endl;
        }
        return st.empty();
    }
};