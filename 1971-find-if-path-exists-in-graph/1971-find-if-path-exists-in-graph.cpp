class Solution {
public:
  vector<vector<int>>list;


  bool solve(int s ,int d,int n){
      queue<int>q;
      vector<bool>visited(n);
      q.push(s);
      while(!q.empty()){
        //remove
        int rv = q.front();
        q.pop();
        //ignore if visisted;
        if(visited[rv]){
            continue;
        }
        //mark visited
        visited[rv] = true;
        //self work
        if(rv==d){
            return true;
        }
        //add visited
        for(int x : list[rv]){
            if(!visited[x]){
                visited[rv] = true;
                q.push(x);
            }
        }


      }
      return false;
  }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i=0;i<n;i++){
            list.push_back(vector<int>());
        }
        for(auto x: edges){
            int u = x[0];
            int v = x[1];
            list[u].push_back(v);
            list[v].push_back(u);
        }
        return solve(source,destination,n);
    }
};