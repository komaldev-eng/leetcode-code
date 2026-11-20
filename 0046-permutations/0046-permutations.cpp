class Solution {
public:
   vector<vector<int>>ans;

   void solve(vector<int>nums,int idx){
    if(nums.size()==idx){
        vector<int>res;
        for(int x: nums){
            res.push_back(x);
        }
        ans.push_back(res);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]);
        solve(nums,idx+1);
        swap(nums[i],nums[idx]);
    }
   }
    vector<vector<int>> permute(vector<int>& nums) {
       
        solve(nums,0);
        return ans;
    }
};