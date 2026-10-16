class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,n=nums.size(),sum=0;
        vector<int> prifix(n,0);
         prifix[0]=nums[0];
        for(int i=1;i<n;i++){
            prifix[i]=prifix[i-1]+nums[i];
        }
        unordered_map<int,int> v;
        for(int i=0;i<n;i++){
            if(prifix[i]==k)
            count++;
            int val=prifix[i]-k; 
            if(v.find(val)!=v.end())
                count+=v[val];
                v[prifix[i]]++;
            
        }
        return count;
    }
};