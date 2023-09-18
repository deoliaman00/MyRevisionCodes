/*
class DisjointSet
{
private:
    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }
    void unionBySize(int u, int v)
    {
        int u_p = findPar(u);
        int v_p = findPar(v);
        if (u_p == v_p)
        {
            return;
        }
        if (size[u_p] < size[v_p])
        {
            parent[u_p] = v_p;
            size[v_p] += size[u_p];
        }
        else
        {
            parent[v_p] = u_p;
            size[u_p] += size[v_p];
        }
    }
    void unionByRank(int u, int v)
    {
        int ultimate_u_parent = findPar(u);
        int ultimate_v_parent = findPar(v);
        if (ultimate_v_parent == ultimate_u_parent)
        {
            return;
        }
        if (rank[ultimate_v_parent] < rank[ultimate_u_parent])
        {
            parent[ultimate_v_parent] = ultimate_u_parent;
        }
        else if (rank[ultimate_v_parent] > rank[ultimate_u_parent])
        {
            parent[ultimate_u_parent] = ultimate_v_parent;
        }
        else
        {
            parent[ultimate_v_parent] = ultimate_u_parent;
            rank[ultimate_u_parent]++;
        }
    }
    };

    int numProvinces(vector<vector<int>> adj, int V) {
        int n=adj.size();
        int m=adj[0].size();
        DisjointSet obj(V);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(adj[i][j]==1)
                {
                    obj.unionBySize(i,j);
                }
            }
        }
        int count=0;
        for(int i=0;i<V;i++)
        {
            if(obj.findPar(i)==i)
            {

                count++;
            }
        }
        return count;
    }

*/