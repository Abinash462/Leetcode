class Solution
{
    public:
        int numRookCaptures(vector<vector < char>> &board)
        {
            int rookRow;
            int rookCol;
            int numpawns = 0;

           	//find Rook position

            for (int i = 0; i < board.size(); i++)
            {
                for (int j = 0; j < board[0].size(); j++)
                {
                    if (board[i][j] == 'R')
                    {
                        rookRow = i;
                        rookCol = j;
                    }
                }
            }

           	//count pawns present in row

           	//count pawns upward row
            for (int i = rookRow; i >= 0; i--)
            {
                if (board[i][rookCol] == 'B')
                {
                    break;
                }
                if (board[i][rookCol] == 'p')
                {
                    numpawns++;
                    break;
                }
            }

           	//count pawns in downward row
            for (int i = rookRow; i < board.size(); i++)
            {
                if (board[i][rookCol] == 'B')
                {
                    break;
                }
                if (board[i][rookCol] == 'p')
                {
                    numpawns++;
                    break;
                }
            }

           	//count pawns in col

           	//count pawns in right side
            for (int i = rookCol; i < board.size(); i++)
            {
                if (board[rookRow][i] == 'B')
                {
                    break;
                }
                if (board[rookRow][i] == 'p')
                {
                    numpawns++;
                    break;
                }
            }

           	//count pawns in left side
            for (int i = rookCol; i >= 0; i--)
            {
                if (board[rookRow][i] == 'B')
                {
                    break;
                }
                if (board[rookRow][i] == 'p')
                {
                    numpawns++;
                    break;
                }
            }
            return numpawns;
        }
};