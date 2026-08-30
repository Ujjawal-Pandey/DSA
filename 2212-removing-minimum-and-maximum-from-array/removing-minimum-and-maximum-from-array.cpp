#include <iostream>
#include <limits>   
#include <climits> 
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int a=0;
        int b=0 ;
        int mini = INT_MAX; 
        for(int i =0; i<nums.size() ; i++ ){
            if(nums[i]>maxi){
                maxi= nums[i];
                a = i;
            }
            if( nums[i]<mini){
                mini = nums[i];
                b =i;
            }
        }
        int i = min(a,b);
        int j = max(a,b);

        int fro = j+1;
        int bac= nums.size()-i;
        int fro_back = ( i + 1 )+ (nums.size()-j);
        return min({fro_back ,fro ,bac });

        
    }
};