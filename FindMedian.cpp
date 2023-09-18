#include<bits/stdc++.h>
using namespace std;


int func(vector<int>acc)
{
    int n=acc.size();
    if(n%2==0)
    {
        int n1=n/2;
        int n2=n1+1;
        int ans=acc[n1]+acc[n2];
        ans=ans/2;
        return ans;
    }
    else
    {
        return acc[n/2];
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>>Arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<m;j++)
        {
            int x;cin>>x;
           Arr[i][j]=x;
        }
        
    }

    vector<int>temp;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
           temp.push_back(Arr[i][j]);
        }
    }
    sort(temp.begin(),temp.end());

    cout<<"The median of the input data is: "<<func(temp)<<endl;
    
}