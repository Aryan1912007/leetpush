class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v1;
        for(int i=left;i<=right;i++){
            if(i<=9)
                v1.push_back(i);
            else{
                int n=i;

                while(n>0){
            
                    int x=n%10;
                    if(x==0|| i%x!=0)
                    break;
                    
                    n=n/10;
                   } if(n==0)
                        v1.push_back(i);}                

        }
        return v1;
        
    }
};