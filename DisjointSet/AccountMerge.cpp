// https://takeuforward.org/data-structure/accounts-merge-dsu-g-50/
//{ Driver Code Starts
// Initial Template for C++

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

class Solution
{
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        unordered_map<string, int> st;
        int n = accounts.size();
        DisjointSet obj(n);
        n = accounts.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < accounts[i].size(); j++)
            {
                string temp = accounts[i][j];
                if (st.find(temp) == st.end())
                {
                    st[temp] = i;
                }
                else
                {
                    obj.unionBySize(i, st[temp]);
                }
            }
        }

        vector<string> store[n];

        for (auto it : st)
        {
            int node = obj.findPar(it.second);
            string temp = it.first;
            store[node].push_back(temp);
        }
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++)
        {
            if (store[i].size() == 0)
                continue;
            vector<string> temp;
            sort(store[i].begin(), store[i].end());
            temp.push_back(accounts[i][0]);
            for (auto it : store[i])
            {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
*/