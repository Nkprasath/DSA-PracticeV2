class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
    int max = 0;
    int sum = 0;
    
    for (int i = 0; i < prices.size() - 1; i++)
    {
        sum += prices[i + 1] - prices[i];
        
        if (sum > max)
        {
            max = sum;
        }
        else if (sum < 0)
        {
            sum = 0;
        }
    }
    
    return max;
}
};