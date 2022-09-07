class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int x=0;
        int y=0;
        
        for(int i=0;i<row;i++){
            x+=mat[i][i];
            y+=mat[i][row-1-i];
        }
        if(row%2==0){
           return x+y;
        }
             return x+y-mat[row/2][row/2];
    }
};