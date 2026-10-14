class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9)return "";
        string res = "";
        int s = sum / 9, r = sum % 9;
        res.append(s, '9'); num -= s;
        if(r) res += '0' + r, num--;
        res.append(num, '0');
        return res;
    }
};