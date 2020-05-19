class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (int i : nums)
        {
            int d = log10(i) + 1;
            if (d % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};