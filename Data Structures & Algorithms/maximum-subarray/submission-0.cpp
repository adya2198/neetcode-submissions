class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mini=INT_MIN,temp=0;
        int ans=0;
        for(int i=0;i<nums.size();++i){
            mini=max(mini,nums[i]);
            temp+=nums[i];
            ans=max(ans,temp);
            if(temp < 0){
                temp=0;
            }
        }
        if(mini <= 0)return mini;
        return ans;
    }
};
