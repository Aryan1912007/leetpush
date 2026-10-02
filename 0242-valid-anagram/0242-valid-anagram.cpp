class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char ,int> s1;
        map<char , int> s2;
        for(int n1: s){
            s1[n1]++;
        }
        for(int n2: t){
            s2[n2]++;}
        if(s1==s2){
            return true;

        }
        else 
            return false;
        
    }
};