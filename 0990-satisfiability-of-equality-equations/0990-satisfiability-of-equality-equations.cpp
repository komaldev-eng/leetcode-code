class Solution {
public:
    int parent[26];
    int rank[26];
    bool equationsPossible(vector<string>& equations) {
        for(int i=0;i<26;i++){
            parent[i] = i;
            rank[i] = 0;
        }
        for(string s : equations){
            if(s.at(1)== '='){
                int a = s.at(0) - 'a';
                int b = s.at(3) - 'a';
                Union(a,b);

            }
        }

        for(string s:equations){
            if(s.at(1) == '!'){
                int a = s.at(0)-'a';
                int b = s.at(3)-'a';

                if(find(a) == find(b)){
                    return false;
                }
            }
        }
        return true;
    }

    int find(int x){
        if(parent[x]==x){
            return x;
        }
        return find(parent[x]);
    }

    void Union(int a,int b){
        int x = find(a);
        int y = find(b);
        if(rank[x]==rank[y]){
            parent[x] = y;
            rank[y]++;
        }
        else if(rank[x]>rank[y]){
            parent[y] = x;
        }
        else{
            parent[x] = y; 
        }
    }
};