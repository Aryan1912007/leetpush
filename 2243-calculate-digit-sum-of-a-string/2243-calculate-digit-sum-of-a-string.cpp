class Solution {
public:
    string digitSum(string s, int k) {
        string str="";
        int sum=0;
        int j=0;
        int i=0;
        while(s.size()>k){
    
            sum+= s[i]-'0';
           if(s.size()-j<k){
            if(i+1==s.size()){
                str+=to_string(sum);
                sum=0;
                j=0;
            }}
           else{
            if((i+1)%k==0){
                str+=to_string(sum);
                sum=0;
                j+=k;
            }}
            if(i==s.size()-1){
              
                s=str;
                str.clear();
                i=0;
                j=0;}
            else
            i++;
        }
        return s;
        
    }
};