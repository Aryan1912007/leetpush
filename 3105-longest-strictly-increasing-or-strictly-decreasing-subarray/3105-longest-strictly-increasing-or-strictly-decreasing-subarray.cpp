class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
            int count1=1, count2=1;
            int maxx1=1, maxx2=1;
                for(int i=0;i<nums.size()-1;i++){
                    if(nums[i]<nums[i+1]){
                        count1++;
                        maxx1=max(maxx1,count1);
                        count2=1;}
                    if(nums[i]>nums[i+1])
                    {
                        count2++;
                        maxx2=max(maxx2,count2);
                        count1=1;
                    }
                    if(nums[i]==nums[i+1]){
                        count1=1;
                        count2=1;
                    }

                
                }return max(maxx1,maxx2);
    }
};