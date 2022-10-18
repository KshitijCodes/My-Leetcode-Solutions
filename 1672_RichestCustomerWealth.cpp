//Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth_max=0,sum=0;
        for(int i=0; i<accounts.size(); i++){
            sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum+=accounts[i][j];
            }
            if(sum>wealth_max){
                wealth_max=sum;
            }
        }
        return wealth_max;
    }
};
