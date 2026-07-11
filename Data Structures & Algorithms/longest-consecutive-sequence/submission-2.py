class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        temp=float("-inf")
        cnt=0
        cnt1=0
        nums.sort()
        for i in nums:
            if temp == i:
                continue
            elif temp+1 == i:
                cnt1+=1
            else:
                cnt=max(cnt,cnt1+1)
                cnt1=0
            temp=i
        if len(nums) == 0:
            return 0
        cnt=max(cnt,cnt1+1)
        return cnt
            
