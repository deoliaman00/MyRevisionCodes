#include<bits/stdc++.h>
using namespace std;

int check(string temp)
{
    int count=0;
    for(int i=0;i<temp.size();i++)
    {
        if (temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int func(string s,int n)
{
    int maxi=-1;
    for(int i=0;i<s.size();i++)
    {
        string temp=s.substr(i,n);
        int tmaxi=check(temp);
        maxi=max(tmaxi,maxi);

    }
    return maxi;
}
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<func(s,n);
}