class Solution {
public:
    int minAllOneMultiple(int k) {
        unsigned long long digit=0;
        int i=0;
        while(i<k){
            digit=((digit*10)+1)%k;
            if(digit==0)
            return i+1;
            i++;

        }
        return -1;
        
    }
};