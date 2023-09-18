/*
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> adj[], int V, vector<int> &ans, vector<int> &visited)
    {
        visited[node] = 1;
        ans.push_back(node);
        for (auto it : adj[node])
        {
            if (visited[it] != 1)
            {
                dfs(it, adj, V, ans, visited);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        vector<int> VIS(V, 0);

        for (int i = 0; i < V; i++)
        {
            if (VIS[i] != 1)
            {
                VIS[0] = 1;
                dfs(i, adj, V, ans, VIS);
            }
        }
        return ans;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        // lets implement bfs
        vector<int> visited(V, 0);

        queue<int> qt;
        qt.push(0);
        // so that we dont traverse it again
        visited[0] = 1;

        vector<int> ans;
        // queue is
        while (!qt.empty())
        {
            int node = qt.front();
            ans.push_back(node);
            qt.pop();

            for (auto it : adj[node])
            {
                if (visited[it] != 1)
                {
                    visited[it] = 1;
                    qt.push(it);
                }
            }
        }
        return ans;
        // Code here
    }


class Solution
{
public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int src, int V, vector<int> adj[], int vis[])
    {
        vis[src] = 1;
        queue<pair<int, int>> qt;
        qt.push({src, -1});
        while (!qt.empty())
        {
            int node = qt.front().first;
            int parent = qt.front().second;
            qt.pop();
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    qt.push({it, node});
                }
                else
                {
                    if (parent != it)
                        return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[])
    {

        int visited[V] = {0};
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (bfs(i, V, adj, visited) == true)
                    return true;
            }
        }

        return false;
    }
};

*/