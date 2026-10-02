class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int x=0;
        for(int i=0;i<n;i++) {
            x^=start+(2*i);
        
          
        }  
        return x;     
    }
};