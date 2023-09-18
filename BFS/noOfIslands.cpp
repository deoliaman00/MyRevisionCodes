/*

class Solution {
public:

    void bfs(int x,int y,vector<vector<int>>&vis,vector<vector<char>>&grid)
    {
        int N=grid.size();
        int M=grid[0].size();
        queue<pair<int,int>>qt;
        qt.push(make_pair(x,y));
        vis[x][y]=1;
        while(!qt.empty())
        {
            int xdim=qt.front().first;
            int ydim=qt.front().second;
            qt.pop();
            for(int ii=-1;ii<=1;ii++)
            {
                for(int jj=-1;jj<=1;jj++)
                {
                   if(ii==jj || ii==-1 && jj==1 || ii==1 && jj==-1)
                   {
                       continue;
                   }
                   else
                   {
                        int i=ii+xdim;
                        int j=jj+ydim;
                        if(i>=0 && j>=0 && i<N && j<M && grid[i][j]=='1' && !vis[i][j])
                        {
                            qt.push(make_pair(i,j));
                            vis[i][j]=1;
                        }
                   }

                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid)
    {
        int N=grid.size(),M=grid[0].size();
        if(N==0 && M==0)
        {
            return 0;
        }
        vector<vector<int>>vis(N,vector<int>(M,0));
        int c=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==0)
                {
                    c++;
                    bfs(i,j,vis,grid);
                }
            }
        }

        return c;
    }
};

*/