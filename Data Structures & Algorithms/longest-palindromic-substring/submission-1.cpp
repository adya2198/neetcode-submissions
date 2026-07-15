class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        string s1=s;
        reverse(s1.begin(),s1.end());
        int index=-1,ans=INT_MIN;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                if(s[i-1] == s1[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    int startOriginal = i - dp[i][j];
                    int startReverse = n - j;

                    if (startOriginal == startReverse && dp[i][j] > ans) {
                        ans = dp[i][j];
                        index = i;
                    }
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        int start=index-ans;
        cout<<ans;
        return s.substr(start,ans);
    }
};
