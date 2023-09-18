#include<bits/stdc++.h>
using namespace std;




int main()
{

    vector<int>arr{1,2,0};
    int n=arr.size();
    vector<int>l2r(n,1);

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            l2r[i] = l2r[i - 1] + 1;
        }
        
    }

    vector<int> r2l(n, 1);
    for (int i = n-2; i >=0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            r2l[i] = r2l[i + 1] + 1;
        }
    }

    int maxi=0;
    for(int i=0;i<n;i++)
    {
        maxi+=max(l2r[i],r2l[i]);
    }

    cout<<maxi<<endl;


}