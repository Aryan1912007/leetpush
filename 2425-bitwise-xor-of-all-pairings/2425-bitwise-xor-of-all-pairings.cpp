class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x=0;
        int y=0;
        if(nums2.size()%2==1){
        for(int i:nums1){
            x^=i;}}
if(nums1.size()%2==1){
        for(int j:nums2){
            y^=j;}}
            return x^y;
            
        
    }
};