class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,int idx){
        if(idx==nums.size()){
            vector<int>res;
            for(int x:nums){
          
            res.push_back(x);
            }
            ans.push_back(res);
            return; 
            
        }
        unordered_set<int>st;
        for(int i=idx;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                continue;
            }
            st.insert(nums[i]);
            swap(nums[idx],nums[i]);
           solve(nums,idx+1);
           swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};