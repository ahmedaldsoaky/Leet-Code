class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, y = 1, sum = 0;
        while(n)
        {
            if(n%10)
                x += (n%10) * y, y*=10;
            sum+=n%10;
            n/=10;
        }
        cout<<x<<endl;
        return sum * x;
    }
};