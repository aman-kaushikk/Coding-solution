class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n,pro=0;
        n=prices.size();
        int minfar =prices[0];
        
        for(int i=0;i<n;i++ )
        {
            minfar = min(prices[i] , minfar);
            int profit =prices[i] - minfar;
            pro= max(profit,pro);

        }
        return(pro);
    }
};
