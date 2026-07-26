class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int Mprofit = 0 ;
        for (int i =1 ; i< prices.size(); i++){
            int profit = prices[i]-mini;
            Mprofit = max(Mprofit , profit );
            mini = min( prices[i], mini);

        }
        return Mprofit;
        

    }
};