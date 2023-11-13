class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy;
        for(int i=1;i<prices.size();i++){
            buy=prices[i-1];
            if(prices[i]>buy){
                profit+=(prices[i]-buy);
                buy=prices[i+1];
                // i++;
            }
            else{
                buy=prices[i];
            }
        }
        return profit;
    }
};