#include <bits/stdc++.h>

double divi(vector<int>& nums, int d ){
    double sum = 0;
    for(int i = 0 ; i< nums.size(); i++){
        sum += ceil((double)nums[i]/d);
    }
    return sum;
}

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 0 ;
        int high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid = (low+high)/2;
            if (divi(nums , mid)>threshold){
                low = mid +1;
            }
            else{
                high = mid -1;
            }

        }
        return low;

        
    }
};