class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());
        vector<int> nums2;
        int flag=0;
          if(nums1[0]%2==0){
                nums2.push_back(nums1[0]);

            }
            else {
                nums2.push_back(nums1[0]);
                flag=1;}
        for(int i=1;i<nums1.size();i++){
            if(flag==1){
                if(nums1[i]%2==0){
                    int y=nums1[i]-nums1[0];
                    nums2.push_back(y);
                }
                else
                    nums2.push_back(nums1[i]);
            }
            else{
                 if(nums1[i]%2==0){
                    nums2.push_back(nums1[i]);
                }
                else
                    return false;
            }    
            
        }
        if(nums2.size()==nums1.size()){
            return true;
        }
        return false;
    
    }
};