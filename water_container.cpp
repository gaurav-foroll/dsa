class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int area = 0;
        int l = 0;
        int r = height.size() - 1;

        while (l < r)
        {
            int temp = min(height[l], height[r]) * (r - l);
            area = max(area, temp);

            if (height[l] < height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return area;
    }
};