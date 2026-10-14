class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if((num == 1 && sum > 9))return "";
        if(sum < 10)
        {
            string res = to_string(sum);
            while(--num)res+='0';
            return res;
        }
        string res = "9";

        int s = 9;
        while(s + 9 <= sum)
        {
            s+=9;
            res+='9';
        }
        if(s != sum)
            res += to_string(sum-s);
        
        if(res.size() > num) return "";

        int x = num - res.size();
        while(x--)res+='0';

        return res;
    }
};