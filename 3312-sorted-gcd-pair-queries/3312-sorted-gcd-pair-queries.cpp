class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        // freq[x] = frequency of value x
        vector<int> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        // divisible[d] = number of elements divisible by d
        vector<long long> divisible(mx + 1, 0);
        for (int d = 1; d <= mx; d++) {
            for (int multiple = d; multiple <= mx; multiple += d)
                divisible[d] += freq[multiple];
        }

        // exact[d] = number of pairs whose gcd is exactly d
        vector<long long> exact(mx + 1, 0);

        for (int d = mx; d >= 1; d--) {
            long long cnt = divisible[d];
            exact[d] = cnt * (cnt - 1) / 2;

            for (int multiple = d * 2; multiple <= mx; multiple += d)
                exact[d] -= exact[multiple];
        }

        // prefix[d] = number of pairs with gcd <= d
        vector<long long> prefix(mx + 1, 0);
        for (int d = 1; d <= mx; d++)
            prefix[d] = prefix[d - 1] + exact[d];

        vector<int> ans;
        ans.reserve(queries.size());

        for (long long q : queries) {
            // Find first gcd whose cumulative count exceeds q
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};