#include<bits/stdc++.h>
using namespace std;

int func(vector<int>arr,int element)
{
    int l=0,r=arr.size()-1;
    while(l<=r)
    {
        int middle=(l+r)/2;
        if(element==arr[middle])
        {
            return middle;
        }
        if(element>arr[middle])
        {
            l=middle+1;
        }else{
            r=middle-1;
        }
    }
    return -1;
}
int main()
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
    int ele;
    cin>>ele;
    cout<<func(arr,ele);
}