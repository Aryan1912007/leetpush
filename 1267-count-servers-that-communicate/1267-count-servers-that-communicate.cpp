class Solution {
public:
    bool isok(vector<vector<int>>& grid, int row, int col, int n, int m ){
        for(int i=0;i<n;i++){
            if(i!=row){
            if(grid[i][col]==1)
                return true;}
        }
        for(int j=0;j<m;++j){
            if(j!=col){
            if(grid[row][j]==1)
                return true;}
        }
        return false;
    }

    int countServers(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                if(isok(grid, i, j,n,m))
                    count++;}
            }}
            return count;
            
            

      


        
    }
};