class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s="";
        while(n){
            s+=('0'+(n&1));
            n=(n>>1);
        }
        uint32_t ans=0;
        for(int i=s.size();i<32;++i){
            s+='0';
        }
        cout<<s<<endl;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();++i){
            ans+=(s[i]-'0')*(1<<i);
        }
        return ans;
    }
};
