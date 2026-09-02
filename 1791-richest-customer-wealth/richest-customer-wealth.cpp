class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0 ;
        for(int i = 0 ; i<accounts.size(); i++){
            int sum1=0;
            for(int j = 0 ; j<accounts[i].size();j++){
                sum1 =sum1 + accounts[i][j];
               
            }
            if(sum1>sum){
                sum = sum1;
               }
            
        }
        return sum;
    }
};