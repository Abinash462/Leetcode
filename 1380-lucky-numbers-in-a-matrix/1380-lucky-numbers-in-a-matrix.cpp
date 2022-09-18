class Solution
{
    public:
        vector<int> luckyNumbers(vector<vector < int>> &matrix)
        {
            int row = matrix.size();
            int col = matrix[0].size();

            vector<int> ans;
            int min_index = 0;

            for (int i = 0; i < row; i++)
            {
                int mini = INT_MAX;

                for (int j = 0; j < col; j++)
                {
                    if (mini > matrix[i][j])
                    {
                        mini = matrix[i][j];
                        min_index = j;
                    }
                }
                int maxi = INT_MIN;

                for (int j = 0; j < row; j++)
                {
                    if (maxi < matrix[j][min_index])
                    {
                        maxi = matrix[j][min_index];
                    }
                }

                if (maxi == mini)
                {
                    ans.push_back(maxi);
                }
            }
            return ans;
        }
};