class Solution
{
    public:
        int minSubArrayLen(int target, vector<int> &nums)
        {
            int left = 0;
            int right = 0;
            int n = nums.size();
            int sum = 0;
            int mini = INT_MAX;

            while (right < n)
            {
                sum += nums[right];

                if (sum >= target)
                {
                    while (sum >= target)
                    {
                        sum -= nums[left];
                        left++;
                    }
                    mini = min(mini, right - left + 2);
                }
                right++;
            }
            if (mini == INT_MAX)
            {
                return 0;
            }

            return mini;
        }
};