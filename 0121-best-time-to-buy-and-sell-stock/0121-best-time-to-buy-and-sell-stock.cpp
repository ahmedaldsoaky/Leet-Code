class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, mn = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < mn)
                mn = prices[i];
            else
                mx = max(mx, prices[i] - mn);
        }
        return mx;
    }
};