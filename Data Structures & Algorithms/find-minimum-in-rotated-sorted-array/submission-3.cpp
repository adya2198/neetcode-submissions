class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0,high=nums.size()-1;
        while(low < high){
            int mid=(low+high)/2;
            if(nums[low] > nums[high]){
                if(nums[mid] > nums[low]){
                    low=mid;
                }
                else{
                    high=mid;
                }
            }
            else{
                if(nums[mid] < nums[low]){
                    low=mid;
                }
                else{
                    high=mid;
                }
            }
        }
        if(low+1 < nums.size())return min(nums[low],nums[low+1]);
        return nums[low];
    }
};
