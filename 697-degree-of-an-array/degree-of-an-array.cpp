class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
unordered_map<int, int> countMap; 
        unordered_map<int, int> firstSeen; 
        int degree = 0;
        int minLength = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (firstSeen.find(num) == firstSeen.end()) {
                firstSeen[num] = i;
            }
            countMap[num]++;
            if (countMap[num] > degree) {
                degree = countMap[num];
                minLength = i - firstSeen[num] + 1; 
            } 
            else if (countMap[num] == degree) {
                minLength = min(minLength, i - firstSeen[num] + 1);
            }
        }

        return minLength;
    }
};