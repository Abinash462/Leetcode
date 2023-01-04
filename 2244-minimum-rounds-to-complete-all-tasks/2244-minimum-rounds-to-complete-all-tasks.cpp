class Solution
{
    public:
        int minimumRounds(vector<int> &tasks)
        {
            unordered_map<int, int> count;
            int ans = 0;

            for (auto a: tasks)
            {
                ++count[a];
            }
            for (auto x: count)
            {
                if (x.second <= 1)
                {
                    return -1;
                }
                ans += (x.second + 2) / 3;
            }
            return ans;
        }
};