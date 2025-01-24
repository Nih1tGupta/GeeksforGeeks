class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(); int n=grid[0].size();
        int c=0;
        vector<int>row(m,0);
        vector<int>col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    row[i]++;col[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 and (row[i]>1 || col[j]>1 )){c++;}
            }
        }
            return c;
    }
};