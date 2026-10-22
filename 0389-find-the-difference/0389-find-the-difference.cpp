class Solution {
public:
    char findTheDifference(string s, string t) {
        s+=t;
        char le=0;
        for(int i:s){
            le^=i;

        }       
        return le; 
    }
};