class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
            stack<int > s;
            int n=heights.size()-1;
            vector<int> v1(n+1,0);
            vector< int> v2(n+1,0);
          
            for(int i=0;i<heights.size();i++){
                  int count=1;
                while(s.size()>0&&heights[s.top()]>=heights[i]){
                    s.pop();
                }
                if(s.size()==0)
                v1[i]=-1;
                else{
                    v1[i]=s.top();
                }
                s.push(i);}
             while(s.size()>0){
                    s.pop();
                }
               for(int i=n;i>=0;i--){
               while(s.size()>0&&heights[s.top()]>=heights[i]){
                    s.pop();
                }
                if(s.size()==0)
                v2[i]=(n+1);
                else{
                    v2[i]=s.top();
                }
                s.push(i);}
                int maxx=0;
                int curr;
                for(int i=0;i<=n;i++){
                    curr=heights[i]*(abs(v1[i]-v2[i])-1);
                    maxx=max(maxx,curr);
                }
                return maxx;
    }
};