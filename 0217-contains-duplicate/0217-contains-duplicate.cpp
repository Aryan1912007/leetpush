class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int > s1;
        for(int n: nums){
            s1[n]++;
        }
            
        for (auto item : s1) { 
            if (item.second >= 2) { 
                 return true;   
                   }
            
        }
        
                return false;
        
    } 
    
};