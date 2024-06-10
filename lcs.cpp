class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        int count = 1;
        int value = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] == nums[i] + 1)
            {
                count++;
            }
            else if (nums[i + 1] == nums[i])
            {
                value = max(value, count);
            }
            else
            {
                value = max(value, count);
                count = 1;
            }
        }
        value = max(value, count);
        return value;
    }
};