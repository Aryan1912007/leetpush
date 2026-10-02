class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    long sum=0;
    int sum2=0;
    int i=0;
    int flag=0;
    int y=0;
    
    while(i<nums.size()){
        if(nums[i]>9)
            flag=1;
        if(flag==0){
            sum+=nums[i];
            sum2+=nums[i];

        }
        else{
            if(y==0)
             y=nums[i];
            if(y>0){

                sum2+=y%10;
                y=y/10;
                i--;
                if(y==0){
                    flag=0;
                     i++;
                    sum+=nums[i];
                   
                }              
                


            }

        }
        i++;
    }
    return sum-sum2;
    }
    
  
};