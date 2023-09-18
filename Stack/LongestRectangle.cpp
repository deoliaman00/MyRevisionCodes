/*
#include<bits/stdc++.h>
using namespace std;


int maxGreaterArea(vector<int>arr)
{
    // first let's calculate the smallest from the left side
    stack<int>st;
    int N=arr.size();
    vector<int>smallLeft(N);
    for(int i=0;i<arr.size();i++)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
           st.pop();
        }
        if(st.empty())
        {
            smallLeft[i]=0;

        }else{
            smallLeft[i]=st.top()+1;

        }
        st.push(i);
    }
    // so we are done with the perfect stack

    while(!st.empty())st.pop();

    // now we will construct the right
    vector<int>smallRight(N);
    for(int i=N-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>=arr[i])
        {
           st.pop();
        }
        if(st.empty())
        {
            smallRight[i]=N-1;

        }else{
            smallRight[i]=st.top()-1;
        }
        st.push(i);
    }

    int maxi=0;
    for(int i=0;i<N;i++)
    {
        int height=(smallRight[i]-smallLeft[i]+1)*arr[i];
        maxi=max(maxi,height);
    }
    return maxi;
}
int main()
{
    vector<int>arr{2,1,5,6,2,3};
    cout<<maxGreaterArea(arr);
}




*/