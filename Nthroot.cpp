#include<bits/stdc++.h>
using namespace std;

int func(int k,int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*k;
    }
    return ans;
}
int main()
{

    int n,m;
    cin>>n>>m;
    int low=1;
    int high=m;

    while(low<=high)
    {
        int mid=(low+high)/2;
        int res=func(mid,n);
        if(res==m)
        {
            cout<<mid<<endl;
            break;
        }
        else if(res>m)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<-1<<endl;
   
}

/*

APPROACH 1
#include<bits/stdc++.h>
using namespace std;

int func(int k,int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*k;
    }
    return ans;
}
int main()
{

    int n,m;
    cin>>n>>m;

    for(int i=1;i<m;i++)
    {
        int no=pow(i,n);
        if(no==m)
        {
            cout<<i<<endl;
            break;
        }
        else if(no>m)
        {
            cout<<-1<<endl;
            break;
        }
    }
}
*/