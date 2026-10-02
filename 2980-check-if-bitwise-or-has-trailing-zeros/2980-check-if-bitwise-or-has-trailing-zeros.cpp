class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int i=0,count=0;
        while (i<nums.size()){
            if(nums[i]%2==0)
                count++;
            if(count>1)
            return true;
            i++;
                
        }
            return false;
    
        
        
    }
};