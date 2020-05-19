class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int max = 0;
        int len = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                len++;
            }
            else
            {
                if (max < len)
                {
                    max = len;
                }
                len = 0;
            }
        }

        if (len > max)
        {
            max = len;
        }
        return max;
    }
};