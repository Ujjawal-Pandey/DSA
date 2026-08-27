#include <cmath>
#include <algorithm>
long long cal(vector<int>& bloomDay,int cday,int NO , int  ADJ){
    int adjecent= 0;
    int bouquet =0 ; 
    for(int i=0;i<bloomDay.size(); i++){
        if(bloomDay[i]<=cday){
            adjecent++;
        }
        if(adjecent == ADJ){
            bouquet++;
            adjecent=0;
        }
        if(bloomDay[i]>cday){
            adjecent=0;
        }
    }
    if (bouquet>=NO){
        return 1;
    }
    return 0;
}
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        if((long long )m*k> bloomDay.size()){
            return -1;

        } 
        int low= *min_element(bloomDay.begin(), bloomDay.end()) ;
        int high = *max_element(bloomDay.begin(), bloomDay.end());   
        while(low<=high){
            int mid = (low+high)/2;
            if(cal(bloomDay,mid,m,k)==1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        } 
        return low; 
    };
};