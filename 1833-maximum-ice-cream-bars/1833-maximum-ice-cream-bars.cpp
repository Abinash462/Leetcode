class Solution
{
    public:
        int maxIceCream(vector<int> &costs, int coins)
        {
            int m = *max_element(costs.begin(), costs.end());
            vector<int> freq(m + 1, 0);

            for (auto x: costs)
            {
                freq[x]++;
            }

            int ans = 0;
            for (int i = 1; i <= m; i++)
            {
                if (freq[i] == 0)
                {
                    continue;
                }
                if (i > coins)
                {
                    break;
                }
                else
                {
                    int usedcoins = min(freq[i], coins / i);
                    coins -= i * usedcoins;
                    ans += usedcoins;
                }
            }
            return ans;
        }
};