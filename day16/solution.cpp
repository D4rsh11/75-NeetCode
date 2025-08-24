class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for (int coin : coins)
        {
            for (int j = coin; j <= amount; j++)
            {
                if (dp[j - coin] != INT_MAX)
                {
                    dp[j] = min(dp[j], dp[j - coin] + 1);
                }
            }
        }

        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};