class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s;
        for(int i:sentence){
            s.insert(i);
        }
        if(s.size()<26)
            return false;
        return true;
    }
};