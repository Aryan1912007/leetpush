class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int x=strs.size();
        sort(strs.begin(), strs.end());
            string common="";
            for(int i=0;i<strs[0].length()&&strs[x-1].length();i++){
                if(strs[0][i]==strs[x-1][i])
                    common+=strs[0][i];
                else break;
            }
            return common;

        
    }
};