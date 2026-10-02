class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> v1;
        int count1=0,count2=0;
        int i=0;
        while(n>0){
            if(n%2==1){
                if(i%2==0)
                    count1++;
                else
                count2++;
            }
            n=n/2;
            i++;
        }  v1.insert(v1.end(),{count1,count2});
            return v1;
    }
};