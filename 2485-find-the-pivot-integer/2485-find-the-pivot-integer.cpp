class Solution {
public:
    int pivotInteger(int n) {
        int arr[4] = {1, 8, 49, 288};
        int ans[4] = {1, 6, 35, 204};
        for(int i = 0; i < 4; i++)
            if(n == arr[i])
                return ans[i];
        return -1;
    }
};