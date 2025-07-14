class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] != 9)
        {
            digits[n-1]++;
            return digits;
        }
        if(n == 1)
        {
            digits.resize(2);
            digits[0] = 1, digits[1] = 0;
            return digits;
        }
        digits[n-1] = 0;
        cout<<"How";
        for(int i = n-2; i >= 0; i --)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        cout<<"How";
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};