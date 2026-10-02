class Solution {
public:
    string largestEven(string s) {
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]%2==0)
                return s;
            else
            s.pop_back();
            
        }
        return s;
        
    }
};