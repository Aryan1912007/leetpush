class Solution {
public:
    vector<int> date(string s){
        int a=stoi(s.substr(0,2));
        int b=stoi(s.substr(3,2));
        return {a,b};
    }

    int countDaysTogether(string arriveAlice,string leaveAlice,string arriveBob,string leaveBob) {
        vector<int> aa=date(arriveAlice);
        vector<int> la=date(leaveAlice);
        vector<int> ab=date(arriveBob);
        vector<int> lb=date(leaveBob);
        vector<int> start=max(aa,ab);
        vector<int> end=min(la,lb);

        if(start>end){
            return 0;
        }
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int ans=0;

        for(int i=start[0];i<end[0];i++){
            if(i==start[0]){
                ans+=days[i-1]-start[1]+1;
            }
            else{
                ans+=days[i-1];
            }
        }
        ans+=end[1];
        if(start[0]==end[0]){
            return end[1]-start[1]+1;
        }

        return ans;
    }
};