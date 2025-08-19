class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> result(n + 1);
        int offset = 1;
        for (int i = 1; i <= n; i++)
        {
            if (offset * 2 == i)
            {
                offset = i;
            }
            result[i] = result[i - offset] + 1;
        }
        return result;
    }
};