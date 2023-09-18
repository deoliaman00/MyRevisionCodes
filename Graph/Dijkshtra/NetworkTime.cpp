/*
https://leetcode.com/problems/network-delay-time/description/


#define pp pair<int,int>

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k)
    {

            int maxi = -1;
            vector<pair<int, int>> adj[n + 1]; // Change to n + 1 for 1-based indexing
            for (auto it : times)
            {
                adj[it[0]].push_back({it[1], it[2]});
            }
        
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
            pq.push({0, k});
        
            vector<int> dist(n+1, 1e9); // Change to n + 1 for 1-based indexing
        
        
            dist[k] = 0;
            while (!pq.empty())
            {
                auto it = pq.top();
                int cost = it.first;
                int node = it.second;
                pq.pop();
                // if (cost > dist[node]) { // Check if this node has been processed before
                //     continue;
                // }
                for (auto it : adj[node])
                {
                    int nNode = it.first;
                    int costNode = it.second;
                    if (costNode + cost < dist[nNode])
                    {
                        dist[nNode] = costNode + cost;
                        pq.push({dist[nNode], nNode}); // Push the correct values
                    }
                }
            }
            for (int i = 1; i <= n; i++) // Start from 1 for 1-based indexing
            {
                if (dist[i] == 1e9) return -1;
                else
                {
                    maxi = max(maxi, dist[i]);
                }
            }
            return maxi;
    }
};


*/