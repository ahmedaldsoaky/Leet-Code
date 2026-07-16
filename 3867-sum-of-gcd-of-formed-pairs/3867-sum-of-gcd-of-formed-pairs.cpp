class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int mx = nums[0];
        prefixGcd[0] = mx;
        for(int i = 1; i < n; i++)
        {
            mx = max(mx, nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        for(int i = 0; i < n/2; i ++)
            sum += gcd(prefixGcd[i], prefixGcd[n-i-1]);
        return sum;
    }
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};