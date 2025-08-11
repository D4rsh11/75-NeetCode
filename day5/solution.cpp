class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = nums[0];
        int currentSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                maxSum = max(maxSum, currentSum);
            }
            else if (currentSum < 0)
            {
                currentSum = 0;
            }
            currentSum += nums[i];
        }

        maxSum = max(maxSum, currentSum);

        return maxSum;
    }
};