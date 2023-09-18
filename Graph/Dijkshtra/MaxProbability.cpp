/*
https://leetcode.com/problems/path-with-maximum-probability/description/?envType=list&envId=53js48ke


class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end)
    {
        vector<pair<int, double>> adj[n]; // Adjacency list
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0], v = edges[i][1];
            double prob = succProb[i];
            adj[u].push_back({v, prob});
            adj[v].push_back({u, prob}); // Undirected graph
        }

        vector<double> dist(n, 0.0);
        dist[start] = 1.0;

        priority_queue<pair<double, int>> pq; // Use maxHeap for max probability
        pq.push({1.0, start});

        while (!pq.empty())
        {

            auto it=pq.top();
            double probability=it.first;
            int node=it.second;
            pq.pop();

            if (probability < dist[node]) {
                continue; // Skip outdated nodes
            }

            for (auto it : adj[node])
            {
                int adjNode=it.first;
                double edgeProb=it.second;
                double newProb = probability * edgeProb;
                if (newProb > dist[adjNode])
                {
                    dist[adjNode] = newProb;
                    pq.push({newProb, adjNode});
                }
            }
        }

        return dist[end];
    }
};
*/