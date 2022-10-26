class Solution
{
    public:
        int mySqrt(int x)
        {
            if (x == 0)
            {
                return 0;
            }
            if (x == 1)
            {
                return 1;
            }

            int start = 0;
            int end = x - 1;
            int ans = 0;

            while (start <= end)
            {
                long long int mid = start + (end - start) / 2;

                if (mid *mid == x)
                {
                    return mid;
                }
                else if (mid * mid < x)
                {
                    ans = mid;
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
                mid = start + (end - start) / 2;
            }
            return ans;
        }
};