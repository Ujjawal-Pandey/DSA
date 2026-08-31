#include <bits/stdc++.h>
bool TF(vector<int>& weights , int mid,int days){
    int day=1;
    double sum = 0;
    for(int i = 0 ; i< weights.size();i++){
        if(weights[i]+sum>mid){
            day++;
            sum= weights[i];
        }
        else{
            sum +=weights[i];
        }

    }
    if( day<= days){
            return true;
        }
        
    else{    
        return false;
    }
}


class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);

        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(TF(weights, mid , days)==true){
                ans = mid;
                high = mid-1;

            }
            else{
                low = mid+1;
            }   
        }
        return ans;

        
    }
};