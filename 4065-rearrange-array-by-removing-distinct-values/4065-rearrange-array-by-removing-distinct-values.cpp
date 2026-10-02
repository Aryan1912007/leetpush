class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> s1;
        for(int i: nums){
            s1[i]++;
        }
        vector<int> ans;
        
        
        while (true) {
            bool allZero = true; 
            
            for(auto & pair : s1){
                if(pair.second == 0) {
                    continue;
                } else {
                    ans.push_back(pair.first); 
                    pair.second--;            
                    allZero = false;          
                }
            }
        
            if (allZero) {
                break;
            }
        }
        
        return ans;
    }
};