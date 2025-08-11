class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seenNums;

        for (int i : nums)
        {
            if (seenNums.find(i) != seenNums.end())
            {
                return true;
            }
            seenNums.insert(i);
        }
        return false;
    }
};