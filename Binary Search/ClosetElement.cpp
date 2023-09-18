//  print the maximum index of an array element not greater than the given one.
// find the min element greater then x :: a[i]>=x

#include <bits/stdc++.h>
using namespace std;

// for the greatest element on the left of the element
int main()
{
    int n;
    cin >> n;
    int k;
    cin>>k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for(int i=0;i<k;i++)
    {
        int ele;
        cin >> ele;
        int l = -1, r = arr.size();
        while (l +1< r)
        {
            int middle = (l + r) / 2;
            if (ele >=arr[middle])
            {
                l = middle;
            }
            else
            {
                r = middle;
            }
        }
        cout<<l+1<<endl;
    }
    
}


// for the smallest element on the right
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < k; i++)
    {
        int ele;
        cin >> ele;
        int l = -1, r = arr.size();
        while (l + 1 < r)
        {
            int middle = (l + r) / 2;
            if (ele > arr[middle])
            {
                l = middle;
            }
            else
            {
                r = middle;
            }
        }
        cout <<l+ 1 << endl;
    }
}