class Solution {
public:

   void DFS(vector<vector<int>>& image,int i,int j,int color,int val){
     int n = image.size();
     int m = image[0].size();
    if(i<0 || j<0 || i>=n || j>=m || image[i][j]!=val){
        return;
    }
    image[i][j] = color;

    DFS(image,i-1,j,color,val);
    DFS(image,i+1,j,color,val);
    DFS(image,i,j-1,color,val);
    DFS(image,i,j+1,color,val);



   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==sr && j==sc && image[i][j]!=color){
                    DFS(image,i,j,color,image[i][j]);
                }
            }
        }
        return image;
    }
};