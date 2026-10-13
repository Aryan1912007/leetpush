class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long score=0;
        long  y=0;  
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2)
                score+=pow(nums[i],2);
            else
                y+=(pow(nums[i],2));
            

        }
        return y-score;
     
    }
};