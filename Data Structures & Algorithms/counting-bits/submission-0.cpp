class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;++i){
            int temp=i;
            int ct=0;
            while(temp){
                if(temp&1 == 1)ct++;
                temp=(temp>>1);
            }
            ans.push_back(ct);
        }
        return ans;
    }
};
