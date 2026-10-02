class Solution {
public:
    int countKeyChanges(string s) {
            int count=0;
        for(int i=0;i<s.size()-1;i++){
            s[i]=tolower(s[i]);
            s[i+1]=tolower(s[i+1]);
            if(s[i]!=s[i+1])count++;

            }
        return count;
    }
};