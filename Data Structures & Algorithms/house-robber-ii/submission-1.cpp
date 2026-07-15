class Solution {
public:
    int recur(vector<int>&nums,int end,int start,vector<int>&dp){
        if(end < start)return 0;
        if(dp[end] != -1)return dp[end];
        int take=nums[end]+recur(nums,end-2,start,dp);
        int not_take=recur(nums,end-1,start,dp);
        return dp[end]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size() == 1)return nums[0];
        else if(nums.size()==2)return max(nums[0],nums[1]);
        vector<int>dp1(n+1,-1),dp2(n+1,-1);
        recur(nums,n-2,0,dp1);
        recur(nums,n-1,1,dp2);
        return max(dp1[n-2],dp2[n-1]);
    }
};
