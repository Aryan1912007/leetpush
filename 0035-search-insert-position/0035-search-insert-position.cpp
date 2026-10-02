class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int mid;
        while(l<r){
            mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                r=mid;
            }
            else
                l=mid+1;

        }
        if(nums[l]<target)
            return l+1;
            
        return l;

        
    }
};