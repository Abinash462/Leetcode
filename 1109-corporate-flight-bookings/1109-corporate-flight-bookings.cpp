class Solution
{
    public:
        vector<int> corpFlightBookings(vector<vector < int>> &bookings, int n)
        {

            vector<int> ans(n);

            for (auto v: bookings)
            {

                int first = v[0];
                int last = v[1];
                int reverse = v[2];

                ans[first - 1] += reverse;
                if (last < n)
                {
                    ans[last] -= reverse;
                }
            }

            for (int i = 1; i < n; i++)
            {
                ans[i] += ans[i - 1];
            }
            return ans;
        }
};