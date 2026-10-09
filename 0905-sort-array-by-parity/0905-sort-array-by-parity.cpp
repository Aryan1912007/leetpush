class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size()&&i<nums.size()){
            if(nums.size()==1){
                return nums;

            }
            if(nums[i]%2==1&&nums[j]%2==0){
            swap(nums[i],nums[j]);
            i++;
            }
            else if(nums[i]%2==0&&nums[j]==0){
                i++;
                j++;}
            else if(nums[i]%2==0&&nums[j]%2==1)
                i++;
           else
           j++;
        
            
        }
        return nums;
    }
};