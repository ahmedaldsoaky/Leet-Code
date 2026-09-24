class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int& num : nums)
        {
            int c = 0, sum = 0;
            for(int i = 1; i * i <= num; i++)
            {
                if(num % i == 0)
                {
                    c++;
                    sum += i;
                    if(i * i != num)
                    {
                        c++;
                        sum += num/i;
                    }
                }
            }
            if(c == 4)
                ans += sum;
        }
        return ans;
    }
};