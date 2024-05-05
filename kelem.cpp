class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;

        // Count the frequency of each element
        for (auto it : nums)
        {
            m[it]++;
        }

        priority_queue<pair<int, int>> q;

        // Push each element and its frequency as a pair into the priority queue
        for (auto it : m)
        {
            q.push({it.second, it.first});
        }

        vector<int> ans;

        // Pop the top k elements from the priority queue and add them to the result array
        while (k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }

        return ans;
    }
};