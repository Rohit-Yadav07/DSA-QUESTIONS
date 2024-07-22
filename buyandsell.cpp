#include "cp.cpp"
int maxProfit(vector<int>& prices) {
        int maxi=0;
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i+1; j < prices.size(); j++)
            {
                if ((prices[j]-prices[i])>maxi)
                {
                    maxi=max(maxi,prices[j]-prices[i]);
                }
                
            }
            
        }
        return maxi;
    }
    int main(){
        vector<int> prices={7,1,5,3,6,4};
        cout<<maxProfit(prices);
        return 0;
    }