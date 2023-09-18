#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> send, rece;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        send.push_back(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        rece.push_back(x);
    }
    int i = 0;
    int N = max(n1, n2);
    int currMax = 0;
    int count = 1;
    // s-> 1,8,3,9,6
    // e-> 7,9,6,14,7
    while (i < N)
    {
        int s = send[i];
        int r = rece[i];
        if (currMax < s)
        {
            // 0<1
            currMax = r;
        }
        else if (currMax == s)
        {
            currMax = max(currMax, r);
            count++;
        }
        else
        {
            currMax = max(currMax, r);
            count++;
        }
        // cout<<s<<"-> "<<r<<" ---> "<<count<<endl;
        i++;
    }
    cout << count << endl;
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

/*
#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n;cin>>n;
    int seconds;
    cin>>seconds;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        arr.push_back(x);
    }
    int i=1;
    while(seconds--)
    {
        // si=2->4->5
        int si=arr[i-1];
        i=si;// i=2->4->5
    }
    cout<<i<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
*/