#include<bits/stdc++.h>
using namespace std;

void demoRotate(vector<int>&arr)
{
    vector<int> temp = arr;
    int n=arr.size();
    int lastEle=arr[n-1];
    for(int i=1;i<n;i++)
    {
        arr[i]=temp[i-1];
    }
    arr[0]=lastEle;
}
int minimumRightShifts(vector<int> &nums)
{
    int n=nums.size();
   vector<int>temp=nums;
   sort(temp.begin(),temp.end());
   for(int i=0;i<n;i++)
   {
    if(nums==temp)
    {
        return i;
    }else{
        demoRotate(nums);
        for(auto it:nums)cout<<it<<" ";
        cout<<endl;
    }
   }
   return -1;
}


int main()
{
   vector<int> arr{3, 4, 5, 1, 2};
   cout << minimumRightShifts(arr);
}