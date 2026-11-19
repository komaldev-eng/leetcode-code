class Solution {
public:

    int ans = 0;

    void solve(vector<int>nums,int curr){
        if(nums.empty()){
            ans+=curr;
            return;
        }
        int x = nums[0];

        vector<int>remaining(nums.begin()+1,nums.end());
        solve(remaining,curr^x);
        solve(remaining,curr);
    }
    int subsetXORSum(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};