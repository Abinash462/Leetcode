class Solution
{
    public:
        int numJewelsInStones(string jewels, string stones)
        {
            unordered_map<int, int> ans;

            for (char c: jewels)
            {
                ans[c]++;
            }
            int count = 0;

            for (char c: stones)
            {
                if (ans.count(c))
                {
                    count += ans[c];
                }
            }
            return count;
        }
};