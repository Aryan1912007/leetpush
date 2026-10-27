class Solution {
public:
    vector<string> createGrid(int m, int n) {       
        vector<string> s ;
       
        for(int j=0;j<m;j++){
         string str="";
        for(int i=0;i<n;i++){
               if(j==0||i==n-1){
                    str+=".";
               }
               else
                str+="#";
           
    }s.push_back(str);}return s;}
};