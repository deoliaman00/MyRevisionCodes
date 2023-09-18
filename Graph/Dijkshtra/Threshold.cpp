/*
https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/description/?envType=list&envId=53js48ke


class Solution {
public:
    int dijekstra(int n,vector<pair<int,int>> adj[],int start,int distanceThreshold)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> dist(n,1e9);
        
        dist[start]=0;
        
        pq.push({0,start});
        
        while(!pq.empty())
        {
            auto it = pq.top();
            int node = it.second;
            int dis = it.first;
            pq.pop();
            for(auto it: adj[node])
            {
                int adjnode = it.first;
                int edgeweight = it.second;
                if(dis+edgeweight<dist[adjnode])
                {
                    dist[adjnode]=dis+edgeweight;
                    pq.push({dis+edgeweight,adjnode});
                }
            }
        }
        
        int ncount = 0;
        
        for(auto it:dist)
        {
            if(it<=distanceThreshold)
            {
                ncount++;
            }
        }
        
        return ncount;
    }


    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) 
    {
        vector<pair<int,int>> adj[n];
        
        
        for(auto it:edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
        int mini = 1e9;
        int ans = -1;
        
        for(int i=0;i<n;i++)
        {
            int c = dijekstra(n,adj,i,distanceThreshold);
            if(c<=mini)
            {
                mini = c;
                ans=i;
            }
        }
        
        
        return ans;
    }
};


*/