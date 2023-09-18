#include<bits/stdc++.h>
using namespace std;


void dfs(int i, int j, vector<vector<int>>&adj,int &count)
{
    int m=adj.size(),n=adj[0].size();

    if(i<0 || i>=m || j<0 || j>=n || adj[i][j]!=1)return;
    count+=1;
    dfs(i+1,j,adj,count);
    dfs(i, j+1, adj,count);
    dfs(i-1, j, adj,count);
    dfs(i, j-1, adj,count);
}



void func(vector<vector<int>> adj,int &count)
{
    
    int n=adj.size();
    int m=adj[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i==0 || i==n-1 || j==0 || j==m-1)&&(adj[i][j]==1))
            {
                // dfs(i, j, adj);
                adj[i][j]=44;
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((adj[i][j] == 1))
            {
                dfs(i, j, adj,count);
            }
        //cout<<endl;
    }
    cout<<count<<endl;
}
}
int main()
{
    int count=0;
    int m,n;
    vector<vector<int>>adj{{0, 0, 0, 0},{1, 0, 1, 0},{0, 1, 1, 0},{ 0, 0, 0, 0}};
    m=n=4;
    func(adj,count);

}