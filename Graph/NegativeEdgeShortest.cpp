/*
    THIS IS ALL ABOUT BELLMAN FORD ALGORITHM
    THIS HELPS US TO GET THE SMALLEST WEIGHT OF THE EDGES
    ALSO HELPS US TO DETECT THE NEGATIVE EDGES IN THE
    GRAPH

    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S)
    {
        vector<int>dist(V,1e8);
        dist[S]=0;
        Time complexity: 0(VxE)
        Space complexity: 0(n)
        for(int i=0;i<V-1;i++)
        {
            for(auto it:edges)
            {
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                if(dist[u]+wt<dist[v] && dist[u]!=1e9)
                {
                    dist[v]=dist[u]+wt;
                }


            }
        }

         for(auto it:edges)
        {
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                if(dist[u]+wt<dist[v] && dist[u]!=1e9)
                {
                    return {-1};
                }
        }

        return dist;
    }

*/