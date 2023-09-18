/*

https://practice.geeksforgeeks.org/problems/number-of-islands/1


vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
{
    int count = 0;           // Initialize a count to keep track of the number of islands.
    vector<int> ans;         // Initialize a vector to store the answers.
    DisjointSet obj(n * m);  // Create a DisjointSet object to track connected components.
    int X[] = {0, -1, 0, 1}; // Define X and Y offsets for exploring neighboring cells.
    int Y[] = {-1, 0, 1, 0};
    int vis[n][m];               // Create a 2D array to mark visited cells.
    memset(vis, 0, sizeof(vis)); // Initialize all cells as unvisited (0).

    for (auto it : operators)
    {
        int x = it[0];
        int y = it[1];

        if (vis[x][y] == 1)
        {
            ans.push_back(count); // If the cell is already visited, push the current count and continue.
            continue;
        }

        vis[x][y] = 1; // Mark the current cell as visited.
        count++;       // Increment the count as a new island is discovered.

        for (int i = 0; i < 4; i++)
        {
            int nx = x + X[i];
            int ny = y + Y[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (vis[nx][ny] == 1)
                {
                    // if x=0,0 then it is 0*5+ 0=> 0 // x=0,1=> 1, x=0,2=> 2, x=1,2=> 1*5+2=> 7
                    int adjOne = x * m + y;
                    int adjSec = nx * m + ny;

                    if (obj.findPar(adjOne) != obj.findPar(adjSec))
                    {
                        vis[nx][ny] = 1;                 // Mark the neighboring cell as visited.
                        obj.unionBySize(adjOne, adjSec); // Merge the two sets representing connected islands.
                        count--;                         // Decrement the count since two islands are merging.
                    }
                }
            }
        }

        ans.push_back(count); // Push the current count into the answer vector.
    }

    return ans; // Return the vector containing counts of islands after each operator.
}


*/
