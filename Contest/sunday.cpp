#include<bits/stdc++.h>
using namespace std;

long long minimumPossibleSum(int n, int target)
{
    if (n == 1 && target == 1)
        return 1;
    set<int> st;
    int i = 1;
    while (st.size() != n)
    {
        int order = target - i;
        if (st.count(order))
        {
            i++;
            continue;
        }
        else
        {
            st.insert(i);
        }
        i++;
    }
    long long sum = 0;
    for (auto it : st)
    {
       // cout<<it<<" -> ";
        sum += it;
    }
    return sum;
}

int main()
{
    cout << minimumPossibleSum(2,3)<<endl;
}