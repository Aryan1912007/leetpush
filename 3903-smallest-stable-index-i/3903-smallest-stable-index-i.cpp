class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
      
        for(int i=0;i<nums.size();i++){
               auto y=max_element(nums.begin(),nums.begin()+i);
               auto z=min_element(nums.begin()+i,nums.end());
               int a=(*y)-(*z);
               if(a<=k)
               return i;

        }
        return -1;

        
    }
};