class Solution {
  public:
    int maxProfit(int k, int n, int prices[]) {
        // code here
        if(n <=1 or k ==0)
            return 0;
        int profit =0;
        if(k>=n/2){
            for(int i=0;i<n-1;i++){
                if(prices[i]<prices[i+1]){
                    profit += prices[i+1]-prices[i];
                }
            }
            return profit;
        }
        vector<int> buy(k,INT_MIN);
        vector<int> sell(k);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                buy[j] = max(buy[j], j==0?0-prices[i]:sell[j-1]-prices[i]);
                sell[j]= max(sell[j], buy[j]+prices[i]);
            }
        }
        return sell[k-1];
    }
};
