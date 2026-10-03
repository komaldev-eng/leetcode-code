class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        int sumMax = 0;
        int sumMin = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+= nums[i];
            sumMax += nums[i];
            maxSum = max(maxSum,sumMax);
            if(sumMax<0){
                sumMax = 0;
            }

            sumMin += nums[i];
            minSum = min(minSum, sumMin);
            if(sumMin>0)
            {
                sumMin = 0;
            }
        }

            if(maxSum<0){
                return maxSum ;
            }
        
            int circularSum = sum-minSum;
        
        return max(circularSum,maxSum);
    }
};