class Solution
{
    public:
        bool containsDuplicate(vector<int> &nums)
        {
            unordered_set<int> ans;

            for (auto num: nums)
            {
                const auto it = ans.find(num);
                if (it != ans.end())
                {
                    return true;
                }
                ans.insert(num);
            }
            return false;
        }
};