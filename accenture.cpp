#include<bits/stdc++.h>
using namespace std;


string func(string s)
{
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            s.erase(s.begin(),i);
        }
    }
    return s;
}
int main()
{
    string str;
    cin>>str;
    cout<<"The ans is "<<func(str)<<endl;
}