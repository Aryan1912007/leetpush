class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int > s;
        int i=0,j=n;
        while(j<nums.size()){
            if(2*n==1){
                s.push_back(nums[i]);
                return s;
            }
            s.push_back(nums[i]);
            s.push_back(nums[j]);
            i++;
            j++;
        }      
        return s;

    }
};