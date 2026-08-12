class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int i=0,j=0,n=s.size();
        int ans=0;
        while(j < n){
            mp[s[j]]++;
            while(mp[s[j]] > 1){
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j+1-i);
            j++;
        }
        return ans;
    }
};
