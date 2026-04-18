class Solution {
public:
    int mirrorDistance(int n) {
        int num = 0;
        int t = n;
        while(n)
        {
            num = (num * 10) + (n % 10);
            n/=10;
        }
        cout<<num<<endl;
        return abs(t - num);
    }
};