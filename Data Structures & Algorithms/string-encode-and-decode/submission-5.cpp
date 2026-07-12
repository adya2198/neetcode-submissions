class Solution {
public:
    vector<pair<int,int>>v;
    string encode(vector<string>& strs) {
        v.push_back({0,0});
        string s="";
        int ct=0;
        for(int i=0;i<strs.size();++i){
            s+=strs[i];
            ct+=strs[i].size();
            v.push_back({i+1,ct});
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        if(v.size() == 1)return {};
        else{
            string s1;
            for(int i=1;i<v.size();++i){
                s1=s.substr(v[i-1].second,v[i].second-v[i-1].second);
                ans.push_back(s1);
            }
        }
        return ans;
    }
};
