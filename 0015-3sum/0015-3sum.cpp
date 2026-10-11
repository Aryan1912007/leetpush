class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& s) {
        sort(s.begin(),s.end());
        vector<vector<int>> ans;
        for(int i=0;i<s.size();i++){
            if(i>0&&s[i]==s[i-1])
                continue;
            else{
           
            int k=s.size()-1;
            int j=i+1;
            while(j<k){
                if(s[j]+s[k]+s[i]==0){
                   ans.push_back({s[i],s[j],s[k]});
                  while (j < k && s[j] == s[j + 1]) j++;
                    while (j < k && s[k] == s[k - 1]) k--;
                    j++;
                    k--;}
                else if(s[j]+s[k]+s[i]<0)
                    j++;
                else k--;
                    
            }}}           
            return ans;
        }};