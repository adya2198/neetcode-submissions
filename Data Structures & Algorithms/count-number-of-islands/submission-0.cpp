class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        vector<int>row,col;
        row={-1,0,1,0};
        col={0,-1,0,1};
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    stack<pair<int,int>>st;
                    st.push({i,j});
                    ans++;
                    while(!st.empty()){
                        auto ku=st.top();
                        st.pop();
                        int i1=ku.first;
                        int j1=ku.second;
                        vis[i1][j1]=1;
                    for(int k=0;k<4;++k){
                        int n_row=i1+row[k];
                        int n_col=j1+col[k];
                        if(n_row >= 0 && n_row < n && n_col >= 0 && n_col < m){
                            if(grid[n_row][n_col] == '1' && vis[n_row][n_col] == 0){
                                st.push({n_row,n_col});
                            }
                        }
                    }
                    }
                }
            }
        }
        return ans;
    }
};
