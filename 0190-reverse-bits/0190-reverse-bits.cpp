class Solution {
public:
    int reverseBits(int n) {
        int res= 0;
        for(int i = 0; i <= 31; i++)
        {
            cout<<((n>>31-i) & 1)<<' ';
            if((n>>i) & 1)
                res |= (1<<31-i);
        }
        return res;
    }
};