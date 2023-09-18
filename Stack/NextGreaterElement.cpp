/*
#include<bits/stdc++.h>
using namespace std;


vector<int> func(vector<int>arr)
{
    int n=arr.size();
    stack<int>st;
    vector<int>ans(n,-1);
    for(int i=2*n-1;i>=0;i--)
    {
        while(st.empty()==false && arr[i%n]>=st.top())
        {
            st.pop();
        }
        if(arr[i%n]<st.top() && st.empty()==false)
        {
            ans[i%n]=arr[i%n];
        }
        st.push(arr[i%n]);
    }

    return ans;
}
int main()
{
    vector<int>arr{5,7,1,2,6,0};
    cout<<func(arr);
}



*/