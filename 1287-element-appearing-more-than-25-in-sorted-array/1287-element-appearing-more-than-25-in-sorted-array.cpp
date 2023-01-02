class Solution
{
    public:
        int findSpecialInteger(vector<int> &arr)
        {
            unordered_map<int, int> m;
            int n = arr.size();

            for (int i = 0; i < n; i++)
            {
                m[arr[i]]++;
            }

            for (auto i: m)
            {
                if (i.second > n / 4)
                {
                    return i.first;
                }
            }
            return arr[0];
        }
};