class Solution
{
    public:
        int numJewelsInStones(string jewels, string stones)
        {
            unordered_map<int, int> ans;
            int count = 0;

            for (char c: stones)
            {
                ans[c]++;
            }

            for (char c: jewels)
            {
                if (ans.count(c))
                {
                    count += ans[c];
                }
            }
            return count;
        }
};