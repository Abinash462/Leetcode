class Solution
{
    public:
        vector<int> luckyNumbers(vector<vector < int>> &matrix)
        {
            int row = matrix.size();
            int col = matrix[0].size();

            vector<int> ans;

            for (int i = 0; i < row; i++)
            {
                int Min = INT_MAX;
                int min_index = 0;

                for (int j = 0; j < col; j++)
                {
                    if (Min > matrix[i][j])
                    {
                        Min = matrix[i][j];
                        min_index = j;
                    }
                }

                bool istrue = true;

                for (int j = 0; j < row; j++)
                {
                    if (matrix[i][min_index] < matrix[j][min_index])
                    {
                        istrue = false;
                        break;
                    }
                }

                if (istrue == true)
                {
                    ans.push_back(matrix[i][min_index]);
                }
            }
            return ans;
        }
};