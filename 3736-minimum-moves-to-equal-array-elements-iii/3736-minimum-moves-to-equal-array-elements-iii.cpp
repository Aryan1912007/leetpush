class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx=0;
        int sum=0;
        for(int i: nums){
            maxx=max(i,maxx);
            sum+=i;
        }
        return maxx*nums.size()-sum;
        
    }
};