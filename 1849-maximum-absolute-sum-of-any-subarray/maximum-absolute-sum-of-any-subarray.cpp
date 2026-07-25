class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //ujjawal
        int MaxSub = INT_MIN, CurrMax = 0;
        int MinSub = INT_MAX, CurrMin = 0;

        
        for (auto &x : nums) {

            CurrMax += x;

            MaxSub = max(MaxSub, CurrMax);

            if (CurrMax < 0)
                CurrMax = 0;
        }

       
        for (auto &x : nums) {

            CurrMin += x;

            MinSub = min(MinSub, CurrMin);

            if (CurrMin > 0)
                CurrMin = 0;
        }

        return max(abs(MaxSub), abs(MinSub));
    }
};