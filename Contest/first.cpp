#include<bits/stdc++.h>
using namespace std;

bool func(vector<int>arr)
{
    int n=arr.size();
    map<int,int>mp;
    sort(arr.begin(),arr.end());

    //checking the last two element is occuring two times
    int maxi = arr[n - 1];
    if((arr[n-1]!=arr[n-2])||(n != maxi + 1))
        {
            return false;
    }

    //no element except maxi occur two times
    for(auto it:arr)
    {
        mp[it]++;
    }

    for(auto it:mp)
    {
        if(it.second>1 && it.first!=maxi)
        {
            return false;
        }
        if(it.first<1 || it.first>maxi)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    func(arr);
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