class Solution {
public:

    int solve(string &s,string &t,int i,int j,vector<vector<int>> &dp){
        if(i==s.length()|| j==t.length()){
            return 0;
        }
         if(dp[i][j]!=-1){
            return dp[i][j];
         }
       if(s.at(i) == t.at(j)){
        return dp[i][j] = 1+solve(s,t,i+1,j+1,dp);
       }
       int a = solve(s,t,i,j+1,dp);
       int b = solve(s,t,i+1,j,dp);
       return dp[i][j] = max(a,b);

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(text1,text2,0,0,dp);
    }
};