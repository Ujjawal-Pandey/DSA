class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(low == high && mid == low ){
                return nums[low];
            }
            if(nums[mid]>=nums[low]){
                if(nums[low]<nums[high]){
                  high=mid;
                }
                else{
                    low = mid+1;

                }
            }
            else{
                if(nums[low]<=nums[high]){
                    low = mid+1;

                }
                else{
                    high=mid;
                }
            }

        }
        return -1;
    }
};