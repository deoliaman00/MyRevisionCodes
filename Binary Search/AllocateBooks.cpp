#include<bits/stdc++.h>
using namespace std;



int func(int limit, vector<int> &arr)
{

    int st = 1;
    long long int currSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (currSum + arr[i] <= limit)
        {
            currSum += arr[i];
        }
        else
        {
            st++;
            currSum = arr[i];
        }
    }
    return st;
}

int findPages(vector<int> &arr, int n, int m)
{
    // m-> no of students
    // n-> no of elements
    if (m > n)
        return -1;
    int initial = *max_element(arr.begin(), arr.end());
    int sum_ele = accumulate(arr.begin(), arr.end(), 0);
    int low = initial;
    int high = sum_ele;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int depends = func(mid, arr);
        if (depends > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        arr.push_back(x);
    }

    int sum=accumulate(arr.begin(),arr.end(),0);
    int low=arr[0];
    int high=sum;
    while(low<=high)
    {
        int mid=(low+high)>>1;

    }
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