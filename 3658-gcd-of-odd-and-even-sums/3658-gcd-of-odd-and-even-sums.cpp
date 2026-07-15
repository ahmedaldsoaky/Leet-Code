class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long sumOdd = 1, sumEven = 0;
        int x = n, i = 3;
        while(--x) sumOdd+=i, i+=2;
        i = 2, x = n;
        while(--x) sumEven+=i, i+=2;
        cout<<sumOdd<<' '<<sumEven;
        return gcd(sumEven, sumOdd);
    }
};