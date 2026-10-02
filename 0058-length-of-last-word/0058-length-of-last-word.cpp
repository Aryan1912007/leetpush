class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=0;
        int x=0;
        for(int i=s.size()-1;i>=0;i--){
            if((!(isalpha(s[i])))&& count==0){
                continue ;}
            if(count!=0&&(!(isalpha(s[i]))))
             break;

            else {
                count++;
                }
            }
          return count;
        
    }
};