class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxx=0;
        
        for(int i=0;i<nums.size();i++){
            long long pro=1;
            int l=1;
            int h=0;
            for(int j=i;j<nums.size();j++){
                if(pro>pow(2,30))
                break;
                pro*=nums[j];
                l=lcm(l,nums[j]);
                h=gcd(h,nums[j]);
                    if(pro==l*h){
                        maxx=max(maxx,j-i);
                    }
                }
            }
        
        return maxx+1;
        
    }
};