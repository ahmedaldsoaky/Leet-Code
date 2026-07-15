class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = n*(n+1);
        int sumOdd = n * n;
        cout<<sumOdd<<' '<<sumEven<<endl;
        return gcd(sumEven, sumOdd);
    }
};