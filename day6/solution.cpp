class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int maxProduct = nums[0];
        int currMax = nums[0];
        int currMin = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < 0)
            {
                swap(currMax, currMin);
            }
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);

            maxProduct = max(maxProduct, currMax);
        }
        return maxProduct;
    }
};