class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string v=s;
        for(int i=0;i<s.size();i++){
            v[indices[i]]=s[i];
        }
        return v;
    }
};