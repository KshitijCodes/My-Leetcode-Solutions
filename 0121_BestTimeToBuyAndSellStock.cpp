//Best Time to Buy and Sell Stock

class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int cost=0,sale=0,pl=0,maxpl=0;
    //     for(int i=0; i<prices.size(); i++){
    //         cost = prices[i];
    //         for(int j=i; j<prices.size(); j++){
    //             sale = prices[j];
    //             pl = sale - cost;
    //             maxpl = ((pl>maxpl)?(pl):(maxpl));
    //         }
    //     }
    //     return maxpl;
    // }
    
    int maxProfit(vector<int>& prices) {
        int cost=prices[0],sale=0,pl=0,maxpl=0;
        for(int i=0; i<prices.size(); i++){
            cost = ((prices[i]<cost)?(prices[i]):(cost));
            sale = prices[i];
            pl = sale - cost;
            maxpl = ((pl>maxpl)?(pl):(maxpl));
            
        }
        return maxpl;
    }
};
