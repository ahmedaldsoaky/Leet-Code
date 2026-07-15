class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*(2*n+1);
        int sumEven = n*(n+1);
        return gcd(sumEven, sumOdd);
    }
};