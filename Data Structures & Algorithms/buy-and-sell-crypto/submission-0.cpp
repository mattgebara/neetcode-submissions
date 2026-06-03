class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
           int lowest = prices[0];
           int maxprofit = 0;

           for (int i=0; i < prices.size(); i++) 
           {
            
            if (prices[i] < lowest)
            {
                lowest = prices[i];
            }
            
            if (prices[i] - lowest > maxprofit)
            {
                maxprofit = prices[i] - lowest;
            }
           }
           return maxprofit;    

    }
};
