class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]>nums[2]&&nums[1]+nums[2]>nums[0]&&nums[0]+nums[2]>nums[1]){
            if(nums[0]==nums[1]||nums[1]==nums[2]||nums[0]==nums[2]){
                if(nums[1]==nums[2]&&nums[0]==nums[1])
                return "equilateral";
            return "isosceles";
            }
            return "scalene";}
        return "none";
        
    }
};