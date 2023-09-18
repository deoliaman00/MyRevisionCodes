/*
vector<vector<int>> stockBuySell(vector<int> A, int n)
    {

        int lastIndx = 0;
        vector<vector<int>> ans;
        for (int i = 1; i < n; i++)
        {
            // the prevBuy > CurrentBuy
            if (A[lastIndx] >= A[i])
            {
                lastIndx = i;
            }
            else
            {
                ans.push_back({lastIndx, i});
                lastIndx = i;
            }
        }

        for (auto it : ans)
        {
            for (auto i : it)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return ans;
    }

*/
