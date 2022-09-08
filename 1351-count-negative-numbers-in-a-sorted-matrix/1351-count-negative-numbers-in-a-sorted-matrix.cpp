class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int ans=0;
        
        for(int i=0;i<row;i++){
            int count=upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
            ans+=count;
        }
        return ans;
    }
};