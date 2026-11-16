class Solution {
public:
    const int M = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int bits[2] = {};
        vector<int> barity;
        for(int i = 1; i < arr.size(); i++)arr[i]+=arr[i-1];
        for(auto& i : arr) barity.push_back(i&1);
        int c = count(barity.begin(), barity.end(), 1);
        for(auto& i : barity)
        {
            int ops = bits[!i];
            c = ((c % M) + (ops % M)) % M;
            bits[i]++;
        }
        return c;
    }
};