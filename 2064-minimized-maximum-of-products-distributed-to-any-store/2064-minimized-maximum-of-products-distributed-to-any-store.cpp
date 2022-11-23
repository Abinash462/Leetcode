class Solution
{
    public:
        bool limitofsubarray(vector<int> &q, int n, int limit)
        {
            int count = 0;
            for (int i = 0; i < q.size(); i++)
            {
                if (q[i] <= limit)
                {
                    count++;
                }
                else
                {
                    int temp = q[i];
                    while (temp > 0)
                    {
                        temp -= limit;
                        count++;
                    }
                }
                if (count > n) return false;
            }
            return true;
        }

    int minimizedMaximum(int n, vector<int> &quantities)
    {
        int start = 1;
        int end = *max_element(quantities.begin(), quantities.end());
        int ans = INT_MAX;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (limitofsubarray(quantities, n, mid))
            {
                ans = min(ans, mid);
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};