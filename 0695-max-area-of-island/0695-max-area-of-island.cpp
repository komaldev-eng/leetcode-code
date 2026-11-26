class Solution {
public:

   int DFS(vector<vector<int>>& grid,int i,int j){
    int n = grid.size();
        int m = grid[0].size();

     if(i<0 || j<0 || j>=m ||i>=n || grid[i][j] == 0 || grid[i][j] == 5){
        return 0;
     }

     grid[i][j] = 5;

      int u = DFS(grid,i-1,j);
      int d = DFS(grid,i+1,j);
      int l = DFS(grid,i,j-1);
      int r = DFS(grid,i,j+1);


     int area = 1+u+d+l+r;
     return area;
   }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                   int area =  DFS(grid,i,j);
                    maxArea = max(area,maxArea);

                }
            }
        }
        return maxArea;
    }
};