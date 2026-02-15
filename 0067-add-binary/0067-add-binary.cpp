class Solution {
public:
    string addBinary(string a, string b) {
        int rem = 0, n = a.size(), m = b.size();
        string res = "";
        while(n > 0 || m > 0 || rem)
        {
            if(n > 0) rem += a[n-1] - '0', n--;
            if(m > 0) rem += b[m-1] - '0', m--;
            res += rem % 2 + '0';
            rem>>=1;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};