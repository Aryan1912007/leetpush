class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int x=0;
       int count;
        for(int i=0;i<nums.size();i++){
           while(nums[i]>0){
           
            nums[i]=nums[i]/10;
             count++;
            
           }
           if(count%2==0)
            x++;
            count=0;
            
        }
        return x;
    }
};