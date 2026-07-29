class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ;
        for(int i = 0 ; i< nums.size(); i++){
            int x = nums[i];
            if(nums[i]==k){
                count++;
            }
            for(int j = i+1 ; j<nums.size(); j++){  
                x= x+ nums[j];
                if(x == k){
                    count ++;
                }
            }        
        }
        return count;
        
    }
};