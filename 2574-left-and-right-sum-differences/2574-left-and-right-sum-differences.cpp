class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int > leftsum;
        vector<int > rightsum;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            
        }
        int s1=0;
        int s2=0;
        for(int i=0;i<nums.size();i++){
            s2+=nums[i];
            leftsum.push_back(s1);
            s1+=nums[i];
            rightsum.push_back(sum-s1);
            nums[i]=abs(leftsum[i]-rightsum[i]);


        }
        return nums;
        
    }
};