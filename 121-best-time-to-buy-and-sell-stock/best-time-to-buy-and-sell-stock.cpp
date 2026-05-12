class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min=INT_MAX;
        int maxi = 0;

        for(int price:prices)
        {
            if (min>price)
            {
                min = price;
            }
            else 
            {
                maxi = max(maxi,price-min);
            }
        }
        return maxi;
        
    }
};