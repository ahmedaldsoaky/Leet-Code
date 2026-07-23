class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
        int i = 1, sz = nums.size();
        
        for (int j = 1; j < sz; j++) {
            if (nums[j] != nums[i - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};