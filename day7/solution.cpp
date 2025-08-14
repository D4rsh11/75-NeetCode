class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        int result = nums[0];

        while (left <= right)
        {

            if (nums[left] < nums[right])
            {
                if (nums[left] < result)
                {
                    result = nums[left];
                    break;
                }
            }

            int mid = left + (right - left) / 2;

            if (nums[mid] < result)
            {
                result = nums[mid];
            }
            if (nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return result;
    }
};