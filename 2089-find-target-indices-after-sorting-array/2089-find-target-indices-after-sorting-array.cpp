class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
            vector<int> n;
            int i=0;
           while(i<nums.size()&&nums[i]<=target){
                    if(nums[i]==target)
                    n.push_back(i);
                i++;}

            return n;
        
    }
};