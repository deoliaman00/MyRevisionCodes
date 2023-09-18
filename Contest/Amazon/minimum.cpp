#include <bits/stdc++.h>
using namespace std;

int func(vector<int> arr, vector<char> status)
{
    int maxi = -1;
    set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (status[i] == '+')
        {
            cout << "hi maxi" << endl;
            st.insert(arr[i]);
            int n = st.size();
            if (maxi < n)
            {
                cout << "hi maxi inside" << endl;
                maxi = n;
            }
        }
        else if (status[i] == '-' && st.count(arr[i]))
        {
            cout << "hi erase" << endl;
            st.erase(arr[i]);
        }
    }
    return maxi;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<char> status;
    for (int i = 0; i < n; i++)
    {
        char ct;
        cin >> ct;
        status.push_back(ct);
    }
    cout << func(arr, status);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}