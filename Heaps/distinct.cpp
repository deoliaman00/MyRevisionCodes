#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> arr, int n, int k)
{
    list<int> news;
    vector<int> ans;
    int i, j;
    i = j = 0;
    while (j < n)
    {
        news.push_back(arr[j]);
        if (j - i + 1 == k)
        {
            // cout << i << " :ith time" << endl;
            for (auto it : news)
                cout << it << " ";
            cout << endl;

            set<int> st;
            for (auto it : news)
            {
                st.insert(it);
            }
            ans.push_back(st.size());
            st.clear();
            news.pop_front();
            i++;
        }
        j++;
    }
    return ans;
}

int main()
{
    int n;
    // cout<<"Enter no of elements: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    // cout<<"Enter the window size"<<endl;
    cin >> k;
    vector<int> ans = func(arr, n, k);
    // cout<<"The no of distinct elements is : "<<endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
}