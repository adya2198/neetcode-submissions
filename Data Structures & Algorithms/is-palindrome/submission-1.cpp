class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        vector<int>v;
        for(int i=0;i<n;++i){
            int a=-1;
            if(s[i]-'a' >= 0 && s[i]-'a' < 26){
                a=s[i]-'a';
            }
            else if(s[i]-'A' >= 0 && s[i]-'A' < 26){
                a=s[i]-'A';
            }
            else if(s[i]-'0' >= 0 && s[i]-'0' <= 9){
                a=s[i]-'0';
            }
            if(a != -1){
                v.push_back(a);
            }
        }
        for(int i=0;i<(v.size()/2);++i){
            if(v[i] != v[v.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};
