class Solution {
public:
    int solve(string &s, string& t,int i,int j, vector<vector<int>>&dp){

        if(j==t.length()){
            return 1;
        }
        if(i ==s.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
       long long pick = 0;
       long long  not_pick = 0;
       if(s.at(i)==t.at(j)){
        pick = solve(s,t,i+1,j+1,dp);
       }
       not_pick = solve(s,t,i+1,j,dp);
       return dp[i][j] = pick+not_pick;
    }
    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
       return solve(s,t,0,0,dp);
       
    }
};