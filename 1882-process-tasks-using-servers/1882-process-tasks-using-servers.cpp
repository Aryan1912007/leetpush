class Solution {
public:
   
    vector<int> assignTasks(vector<int>& s, vector<int>& t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=s.size(),m=t.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> f;
        for(int i=0;i<n;++i){
            f.push({s[i],i});
        }
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> b;
        vector<int> ans(m);
        long long tm=0;
        for(int j=0;j<m;++j){
            tm=max(tm,(long long)j);
            if(f.empty()&&b.top().first>tm){
                tm=b.top().first;
            }
            while(!b.empty()&&b.top().first<=tm){
                f.push({s[b.top().second],b.top().second});
                b.pop();
            }
            auto [w,i]=f.top();
            f.pop();
            ans[j]=i;
            b.push({tm+t[j],i});
        }
        return ans;
    }
};
