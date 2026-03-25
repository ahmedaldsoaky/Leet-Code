class Solution {
public:
    bool isUgly(int n) {
        int i = 2;
        while(i <= n)
        {
            if(i > 5)
                return false;
            while(n % i == 0)
            {
                n/=i;
            }
            i++;
        cout<<n<<endl;
        }
        return n != 1 ? false : true;
    }
};