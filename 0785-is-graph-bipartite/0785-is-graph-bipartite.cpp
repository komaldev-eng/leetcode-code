class Solution {
public:
 
    

    
    bool isBipartite(vector<vector<int>>& graph) {
        queue<pair<int,int>>q;
        unordered_map<int,int>visited;
        for(int i=0;i<graph.size();i++){
            if(visited.find(i)!=visited.end()){
              continue;
            }
            q.push({i,0});

            while(!q.empty()){
                auto rv = q.front();
                q.pop();
                int vertex = rv.first;
                int color = rv.second;


                //ignore

                if(visited.find(vertex)!= visited.end()){
                    continue;
                }
                //mark visited

                visited[vertex] = color;

                // add unvisited

                for(auto nbr:graph[vertex]){
                    if(visited.find(nbr) != visited.end()){
                         if(visited[nbr]==color){
                        return false;
                    }
                    }
                    else{
                        q.push({nbr,1-color});
                    }

                }

            }
        }
        return true;
    }
};