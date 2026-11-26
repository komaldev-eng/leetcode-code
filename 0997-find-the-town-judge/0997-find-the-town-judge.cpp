class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       
       vector<int>hash1(n+1,0);
       vector<int>hash2(n+1,0);
       for(int i=0;i<trust.size();i++){
        hash1[trust[i][0]]++;
        hash2[trust[i][1]]++;
       }
       for(int i=1;i<=n;i++){
        if(hash2[i]==n-1&& hash1[i]==0){
          return i;
        }
       }
       return -1;

    }
};