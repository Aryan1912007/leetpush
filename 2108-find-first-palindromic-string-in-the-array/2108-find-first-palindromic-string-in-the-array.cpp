class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string i:words){
            string temp=i;
          reverse(temp.begin(), temp.end());
          if(i==temp)
                return i;
        }
        return "";
        
    }
};