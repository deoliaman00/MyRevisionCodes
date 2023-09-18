/*

    TOPO--LOGICAL--SORT
    for non acyclic directed graphs


    vector<int> topoSort(int V, vector<int> adj[])
    {
        // lets fucking achieve success buddy
        vector<int> indegree(V, 0);
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        queue<int> qt;

        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                qt.push(i);
            }
        }
        vector<int> ans;
        while (!qt.empty())
        {
            int node = qt.front();
            qt.pop();
            ans.push_back(node);
            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    qt.push(it);
                }
            }
        }
        return ans;
    }

    // we can use this algo to tell
    // we have a cycle or not in the graph
    // if cycle is present then topo can't be formed
    // if cycle not present then topo can be formed


    https://leetcode.com/problems/course-schedule/description/
    https://leetcode.com/problems/course-schedule-ii/description/


    vector<int> findOrder(int N, vector<vector<int>>& pre)
    {
        vector<int>adj[N];
       for(auto it:pre)
       {
           adj[it[1]].push_back(it[0]);
       }
        vector<int>indegree(N,0);
        for(int i=0;i<N;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        int V=N;
        queue<int>qt;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            {
                qt.push(i);
            }
        }

        vector<int>ds;
        while(!qt.empty())
        {
            int front=qt.front();
            qt.pop();
            ds.push_back(front);
            for(auto it:adj[front])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    qt.push(it);
                }

            }
        }

        if(V==ds.size())return ds;

        return {};
    }



    ----------Eventual Safe States------------------------------------------------------------------------------------
    A directed graph of V vertices and E edges is given in the form of an adjacency list adj. 
    Each node of the graph is labelled with a distinct integer in the range 0 to V - 1.
    A node is a terminal node if there are no outgoing edges. A node is a safe node if every
    possible path starting from that node leads to a terminal node.
    You have to return an array containing all the safe nodes of the graph.
    The answer should be sorted in ascending order.
    
    
    vector<int> eventualSafeNodes(int V, vector<int> adj[])
    {
        // reversing the edges of the graph
        in this way we are able to get the 
        vector<int>revadj[V];
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                revadj[it].push_back(i);
                indegree[i]++;
            }
        }

        queue<int> qt;

        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                qt.push(i);
            }
        }
        vector<int> ans;
        while (!qt.empty())
        {
            int node = qt.front();
            qt.pop();
            ans.push_back(node);
            for (auto it : revadj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    qt.push(it);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
*/