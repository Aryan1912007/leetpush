class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> v;
        for(char i: s){
            v[i]++;

        }  for (int i=0;i<s.size();i++) {
            if (v[s[i]]==1) 
                return i;
            }
            return -1;
       
    }
};