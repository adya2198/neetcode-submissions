class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;++i){
            int sum=nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j < k){
                if(sum + nums[j]+nums[k] == 0){
                    vector<int>temp;
                    temp={nums[i],nums[j],nums[k]};
                    st.insert(temp);
                    j++;
                    k--;
                }
                else if(sum+nums[j]+nums[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        vector<vector<int>>v;
        for(auto ku:st){
            v.push_back(ku);
        }
        return v;
    }
};
