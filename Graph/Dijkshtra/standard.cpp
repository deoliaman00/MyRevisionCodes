/*


// MOST EASY DIJKSTRA PROBLEM
// ANS-> JUST THE ARRAY WITH LEAST DISTANCES TO IT FROM THE SOURCE NODE

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    vector<int> p(V);
    vector<int> c(V, 1e9);
    for (int i = 0; i < V; i++)
        p[i] = i;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, S});

    c[S] = 0;
    while (!pq.empty())
    {
        auto iu = pq.top();
        int node = iu.second;
        int cost = iu.first;
        pq.pop();

        // BY THIS FOR LOOP NODE IS TELLING PK
        // TO GO DOWN AND CHECK ALL THE NODE THAT ARE LINKED TO "NODE"
        for (auto pk : adj[node])
        {
            int newNode = pk[0];
            int newCost = pk[1] + cost;
            if (c[newNode] > newCost)
            {
                c[newNode] = newCost;
                p[newNode] = node;

                // NOW IF THE COST IS LESS THEN ENTER THIS NODE AS NEW VALUE WITH NEW COST(MIN)
                pq.push({newCost, newNode});
            }
        }
    }
    return c;

    // SUPPOSE WE WANT TO TRAVERSE ALL THE ELEMENTS VIA WHICH WE GOT THE EASIEST / SMALLEST PATH
}
*/