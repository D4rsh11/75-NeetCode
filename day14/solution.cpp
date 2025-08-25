class Solution
{
public:
    int reverseBits(int n)
    {
        int reversed = 0;
        for (int i = 0; i < 32; i++)
        {
            reversed <<= 1;
            reversed |= (n & 1);
            n >>= 1;
        }
        return reversed;
    }
};