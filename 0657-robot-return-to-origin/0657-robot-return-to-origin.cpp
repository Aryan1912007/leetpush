class Solution {
public:
    bool judgeCircle(string moves) {
        int sum=0;
        int sum2=0;
        for(int i: moves){
            if(i=='U'){
                sum+=2;
            }
             if(i=='D'){
                sum-=2;
            }
             if(i=='L'){
                sum2+=3;
            }
             if(i=='R'){
                sum2-=3;
            }


        }
        if(sum==0&&sum2==0)
            return true;
        return false;
        
    }
};