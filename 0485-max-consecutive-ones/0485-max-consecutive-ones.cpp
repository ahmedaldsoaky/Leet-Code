class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0, mx = 0;
        nums.push_back(0);
        for(int i = 0; i < nums.size(); i++)
            if(nums[i])
                c++;
            else
                mx = max(mx, c), c = 0;
        return mx;
    }
};