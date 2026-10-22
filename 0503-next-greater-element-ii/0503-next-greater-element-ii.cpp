class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        vector<int> v(nums.size(),0);
      
        for(int i=nums.size()-1;i>=0;i--){
            while(s.size()>0&&nums[i]>=s.top())
            {s.pop();}
            if(s.size()==0){
                for(int j:nums){
                if(j>nums[i]){
                s.push(j);
                break;}
        }
            }
            if(s.size()==0)
                v[i]=-1;
            else
                v[i]=s.top();
                s.push(nums[i]);
            
        }
       
        return v;
        
    }
};