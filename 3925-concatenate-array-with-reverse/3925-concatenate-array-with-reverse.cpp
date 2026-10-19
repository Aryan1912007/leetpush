class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int > ans(2*nums.size(),0);
        while(i<2*nums.size()){
            if(i>=nums.size()){
                ans[i]=nums[j];
                j--;
            }
            else
            ans[i]=nums[i];
            i++;
        }   
        return ans;
    }
};