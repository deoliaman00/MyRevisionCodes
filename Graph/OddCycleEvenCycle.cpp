/*

so this is based on the checking whether we can color graph with two colors and
second point is that can we check that graph has a odd cycle

This can be done using 2 ways:-
1, BFS
2, DFS
https://takeuforward.org/graph/bipartite-graph-dfs-implementation/





BFS will be done by us

 bool bfs(int node,vector<int>adj[],int V,vector<int>&color)
    {

        queue<int>qt;
        qt.push(node);

        color[node]=0;
        while(!qt.empty())
        {
            int node=qt.front();
            qt.pop();
            for(auto it:adj[node])
            {
                if(color[it]==-1)
                {
                    color[it]=(color[node]==0?1:0);
                     qt.push(it);
                }
                else if(color[it]==color[node])
                {
                     return false;
                }

            }
        }
        return true;
    }
    bool isBipartite(int V, vector<int>adj[])
    {
        // this is basically here so that we can go onto all the elements or not connected or not connected

        vector<int>color(V,-1);
        for(int i=0;i<V;i++)
        {
            if(color[i]==-1)
            {
                if(bfs(i,adj,V,color)==false) // if a color is same then return false and tell the ans
                {
                    return false;
                }
            }
        }
        // if we go through all and still not get a fully colored one we are lost
        return true;

    }


-----------------DFS IMPLEMENTED----------------------------


    bool dfs(int node,int clr,vector<vector<int>>& graph,vector<int>&color)
    {
        color[node]=clr;
        for(auto it:graph[node])
        {
            if(color[it]==-1)
            {
                color[it]=(color[node]==0?1:0);
                if(dfs(it,color[it],graph,color)==false)return false;
            }
            else if(color[it]==color[node])
            {
                return false;
            }
        }
        return true;

    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        int N=graph.size();
        vector<int>color(N,-1);
        for(int i=0;i<N;i++)
        {
            if(color[i]==-1)
            {
                if(dfs(i,0,graph,color)==false)return false;
            }
        }
        return true;
    }








*/