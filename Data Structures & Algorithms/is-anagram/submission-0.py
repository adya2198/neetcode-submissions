class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        for i in range(len(s)):
            if s[i] not in mp:
                mp[s[i]]=1;
            else:
                mp[s[i]]+=1;
        for i in range(len(t)):
            if t[i] not in mp or mp[t[i]] == 0:
                return False
            mp[t[i]]-=1

        for i in mp:
            if mp[i] >= 1:
                return False
        return True