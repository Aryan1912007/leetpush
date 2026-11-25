class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        map<int,int> v1,v2;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])
            bulls++;
        }
        for(int i:guess){
            v1[i]++;
        }
        for(int i:secret){
            v2[i]++;
        }
      for (auto[ch,count]:v1) {
            cows += min(count, v2[ch]);
        }
        cows-=bulls;
        return to_string(bulls)+"A"+to_string(cows) +"B";
        
    }
};