class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref,suff(n,0);
        int a=1,b=1;
        for(int i=0;i<nums.size();++i){
            a*=nums[i];
            pref.push_back(a);
        }
        for(int i=nums.size()-1;i>=0;--i){
            b*=nums[i];
            suff[i]=b;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
            if(i == 0){
                ans.push_back(suff[i+1]);
            }
            else if(i == n-1){
                ans.push_back(pref[i-1]);
            }
            else{
                ans.push_back(pref[i-1]*suff[i+1]);
            }
        }
        return ans;
    }
};
