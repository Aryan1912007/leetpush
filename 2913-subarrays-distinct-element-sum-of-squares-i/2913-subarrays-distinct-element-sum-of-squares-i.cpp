class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int dis=0;
        for(int i=0;i<nums.size();i++){
            set<int > v;
            for(int j=i;j<nums.size();j++){
                   v.insert(nums[j]);
                   dis+=pow(v.size(),2);
}
                
                
            }
        
        return dis;
        
    }
};