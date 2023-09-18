/*
int spanningTree(int V, vector<vector<int>> adj[])
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    vector<int> vis(V, 0);
    int sum = 0;
    while (!pq.empty())
    {
        auto it = pq.top();
        int cost = it.first;
        int adjNode = it.second;

        pq.pop();
        if (vis[adjNode] == 1)
        {
            continue;
        }
        vis[adjNode] = 1;
        sum += cost;
        for (auto ik : adj[adjNode])
        {
            int node = ik[0];
            int cost2 = ik[1];
            if (!vis[node])
            {
                // vis[node]=1;
                pq.push({cost2, node});
            }
        }
    }
    return sum;
}


*/