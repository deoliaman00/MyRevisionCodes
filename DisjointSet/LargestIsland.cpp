/*
https://practice.geeksforgeeks.org/problems/maximum-connected-group/1

    int MaxConnection(vector<vector<int>> &grid)
    {
        int maxiTotal = 0;
        int n = grid.size();
        DisjointSet obj(n * n);
        int X[] = {0, -1, 0, 1};
        int Y[] = {-1, 0, 1, 0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    for (int l = 0; l < 4; l++)
                    {
                        int nx = i + X[l];
                        int ny = j + Y[l];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 1)
                        {
                            int one = i * n + j;
                            int two = nx * n + ny;
                            obj.unionBySize(one, two);
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
        }

        // after connecting all the 1's with each other
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                set<int> st;
                if (grid[i][j] == 0)
                {
                    for (int l = 0; l < 4; l++)
                    {
                        int nx = i + X[l];
                        int ny = j + Y[l];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 1)
                        {
                            int nodeMade = nx * n + ny;
                            int parent = obj.findPar(nodeMade);
                            st.insert(parent);
                        }
                    }
                }
                else
                {
                    continue;
                }
                int maxi = 0;
                for (auto it : st)
                {
                    maxi += obj.size[it];
                }
                maxiTotal = max(maxiTotal, maxi + 1);
                st.clear();
            }
        }

        for (int i = 0; i < n * n; i++)
        {
            int tt = obj.findPar(i);
            int sz = obj.size[tt];
            maxiTotal = max(maxiTotal, sz);
        }
        return maxiTotal;
    }
*/