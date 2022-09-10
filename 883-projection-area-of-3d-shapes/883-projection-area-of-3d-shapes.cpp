class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
            int row=grid.size();
    int col=grid[0].size();
    
    int xy=0;
    int yz=0;
    int xz=0;
    
    for(int i=0;i<row;i++){
        int m=0;
        for(int j=0;j<col;j++){
            if(grid[i][j]>m){
                m=grid[i][j];
            }
            if(grid[i][j]>0){
                xy++;
            }
        }
        yz+=m;
    
    }
    
      for(int i=0;i<col;i++){
            int n=0;
        for(int j=0;j<row;j++){
            if(grid[j][i]>n){
                n=grid[j][i];
            }
        }
          xz+=n;
        }
    return xy+yz+xz;
    }
};