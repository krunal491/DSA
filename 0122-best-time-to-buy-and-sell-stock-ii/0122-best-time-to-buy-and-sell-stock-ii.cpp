class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minprofit = prices[0];
        int p = 0;
        for(int i = 1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                int pro = prices[i] - prices[i-1];
                p = pro + p;
            }
        }

        return p;
    }
};