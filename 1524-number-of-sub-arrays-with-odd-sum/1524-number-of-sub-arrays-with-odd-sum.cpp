class Solution {
public:
    const int M = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int bits[2] = {1, 0};
        int prefix_sum = 0;
        int c = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            prefix_sum += arr[i];
            int p = prefix_sum & 1;
            c = (c + bits[!p]) % M;
            bits[p]++;
        }
        return c;
    }
};