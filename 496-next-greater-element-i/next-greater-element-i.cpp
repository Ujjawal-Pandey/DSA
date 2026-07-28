class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        for(int i = 0 ; i<nums1.size(); i++){
            int x = nums1[i];  
            bool found_greater = false; 
            for(int j= 0 ; j<nums2.size(); j++){
                if(nums2[j]== x){
                    if(j==(nums2.size()-1)){
                        nums1[i]=-1;
                    }
                    for(int k = j+1 ; k< nums2.size(); k++){
                        if(nums2[k]>x){
                            nums1[i]=nums2[k];
                            found_greater = true;
                            break;
                        }
                        else{
                            nums1[i]=-1;
                            

                        }
                    }
                }
            }
        }
        return nums1;
        
    }
};