class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxPrice=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            minPrice=min(minPrice, prices[i]);
            int profit=prices[i]-minPrice;
            maxPrice=max(profit,maxPrice);
        }
        return maxPrice;
    }
};
