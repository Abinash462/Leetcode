class Solution
{
    public:

        int limitsubarray(vector<int> &nums, int limit, int k)
        {
            int count = 1;
            int sum = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > limit)
                {
                    return false;
                }
                if (sum + nums[i] > limit)
                {
                    count++;
                    sum = nums[i];
                }
                else
                {
                    sum += nums[i];
                }
            }
            return count <= k;
        }

    int splitArray(vector<int> &nums, int k)
    {
        int start = *max_element(nums.begin(), nums.end());
        int end = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            end += nums[i];
        }

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (limitsubarray(nums, mid, k) == false)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};