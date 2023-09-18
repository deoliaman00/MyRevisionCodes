#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> &arr)
{
    int N=arr.size();
    vector<int>ans(N,-1);
    stack<int>st;
    for(int i=0;i<N;i++)
    {
        while(!st.empty() && st.top()>arr[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr{5, 99, 2, 14, 23, -5};

    vector<int> ans = func(arr);
    cout<<"Before: "<<endl;
    for(auto it:arr)cout<<it<<" ";
    cout<<endl;
    cout<<"After: "<<endl;
    for (auto it : ans)
        cout << it << " ";
}