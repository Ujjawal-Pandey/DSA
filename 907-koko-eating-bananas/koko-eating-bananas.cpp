#include <cmath>
#include <algorithm>
long long cal(vector<int>& piles, int y){
long long sum = 0;
    for(int i = 0 ; i<piles.size(); i++){
        // double x = (double)piles[i]/y;
        // int a = ceil(x);
        // sum= sum+a;
        sum += ceil((double)piles[i]/(double)y);
    }
    return sum;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int sum = 0 ;
        int high = *max_element(piles.begin(), piles.end());
        int low= 1;
        while(low<high){
            int mid= (low+high)/2;
            if(cal(piles,mid)<=h){
                high = mid;
            }
            else{
                low =mid+1;
            }
        }
        return low;
        
    }
};