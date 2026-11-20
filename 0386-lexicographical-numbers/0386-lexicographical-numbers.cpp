class Solution {
public:
    vector<int>ans;
    void solve(int n,int curr,vector<int>&ans){
        if(curr>n){
            return;
        }
         ans.push_back(curr);
        for(int i=0;i<10;i++){ 
           
            solve(n,curr*10+i,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<10;i++){
         solve(n,i,ans);
        }
        return ans;
    }
};