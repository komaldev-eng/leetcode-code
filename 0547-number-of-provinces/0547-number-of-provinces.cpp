class Solution {
public:
   void DFS(vector<vector<int>>& isConnected,vector<bool>&visited,int i){
     int n = isConnected.size();
       visited[i] = true;
       for(int j = 0;j<n;j++){
        if(isConnected[i][j]==1 && !visited[j]){
           DFS(isConnected,visited,j);
        }
       }
    
   }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
         vector<bool>visited(n,false);

        int count = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                DFS(isConnected,visited,i);
                count++;
             }
        }
        
        return count;
    }
};