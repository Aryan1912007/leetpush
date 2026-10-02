class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> k;
        for(int n: s){
            k.insert(n);
        }
        return k.size();
        
    }
};