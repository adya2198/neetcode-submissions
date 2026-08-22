class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp,mp1;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        int k1=mp.size()-k;
        vector<int>ans;
        vector<vector<int>>v;
        for(auto ku:mp){
            v.push_back({ku.second,ku.first});
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;k > 0;--i){
            k--;
            ans.push_back(v[i][1]);
        }
        return ans;
    }
};
