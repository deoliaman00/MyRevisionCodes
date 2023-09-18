/*
class Solution {
public:
    int m, n;
    vector<vector<vector<int>>> memo;

    int solve(int i1, int j1, int i2, int j2, vector<vector<int>>& grid) {
        if (i1 < 0 || j1 < 0 || i2 < 0 || j2 < 0 || i1 >= m || j1 >= n || i2 >= m || j2 >= n ||
            grid[i1][j1] == -1 || grid[i2][j2] == -1) {
            return INT_MIN;
        }

        // Check if both paths meet at the endpoint
        if (i1 == m - 1 && j1 == n - 1 && i2 == m - 1 && j2 == n - 1) {
            return grid[m - 1][n - 1];
        }

        // Check if we've already computed this subproblem
        if (memo[i1][j1][i2] != -1) {
            return memo[i1][j1][i2];
        }

        int cherries = grid[i1][j1];

        // If the two paths are not equal, add cherries from both paths
        if (i1 != i2 || j1 != j2) {
            cherries += grid[i2][j2];
        }

        // Calculate the maximum cherries collected from all valid paths
        int maxCherries = max({
            solve(i1 + 1, j1, i2 + 1, j2, grid),
            solve(i1 + 1, j1, i2, j2 + 1, grid),
            solve(i1, j1 + 1, i2 + 1, j2, grid),
            solve(i1, j1 + 1, i2, j2 + 1, grid)
        });

        // Store the result in memoization table and return it
        return memo[i1][j1][i2] = cherries + maxCherries;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memo = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(m, -1)));
        int ans = max(0, solve(0, 0, 0, 0, grid)); // Ensure negative results are treated as 0
        return ans;
    }
};



*/