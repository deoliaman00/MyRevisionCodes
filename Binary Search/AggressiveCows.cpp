


//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool func(vector<int> stalls, int i, int k)
    {
        /*
        cows=>k
        i=>limit required minimum to be held
        at last check whether we were able to take all cows
        */
        int limit = i;
        int cows = k;
        int curr = 1;
        int last = stalls[0];
        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - last >= limit)
            {
                last = stalls[i];
                curr++;
            }
        }
        if (curr >= cows)
            return true;
        return false;
    }
    int solve(int n, int k, vector<int> &stalls)
    {
        // low=1 (minimum no of difference between cows)
        // high=(max-min)[if there are only 2 cows then they can be maximum this far only]
        sort(stalls.begin(), stalls.end());
        int maxi = stalls[n - 1];
        int least = stalls[0];
        for (int i = 1; i <= (maxi - least); i++)
        {
            if (func(stalls, i, k) == false)
            {
                return i - 1;
            }
        }
        return (maxi - least);
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends