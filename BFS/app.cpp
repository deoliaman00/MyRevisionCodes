/*
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
    {
        int N=mat.size();
        int M=mat[0].size();
        vector<vector<int>>ans(N,vector<int>(M,-1));
        queue<pair<int,int>>qt;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    qt.push({i,j});
                }

            }
        }
        // now moving to the bfs
        int X[]={0,-1,0,1};
        int Y[]={-1,0,1,0};
        while(!qt.empty())
        {
            auto it=qt.front();
            qt.pop();
            int i=it.first;
            int j=it.second;
            for(int k=0;k<4;k++)
            {
                int newI=i+X[k];
                int newJ=j+Y[k];
                if(newI>=0 && newJ>=0 && newI<N && newJ<M && ans[newI][newJ]==-1)
                {
                    ans[newI][newJ]=1+ans[i][j];
                    qt.push({newI,newJ});
                }
            }
        }
        return ans;
    }
};

*/