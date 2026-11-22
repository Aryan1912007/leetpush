class Solution {
public:
    bool checkString(string s) {
        int flag1=0;
        for(char i:s){
        if(i=='a' &&flag1==1)
            return false;
        if(i=='b'){
            flag1=1;
        }}
        return true;
        
    }
};