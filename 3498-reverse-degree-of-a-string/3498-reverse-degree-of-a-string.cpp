class Solution {
public:
    int reverseDegree(string s) {
        long x=0;
        for(int i=0;i<s.size();i++){
            x=x+((123-s[i])*(i+1));

        }
        return x;

        
    }
};