#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<string,ll>mp;
ll t;
vector<int>ans;
ll maxi=0;

void generate(string s)
{
    stringstream ss(s);
    string word;
    vector<string>v;
    while(ss>>word)
    {
        v.push_back(word);
    }
    mp[v[1]]=t+stoi(v[2]);
    maxi=max(maxi,mp[v[1]]);
}

void renew(string s)
{
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word)
    {
        v.push_back(word);
    }
    if(mp.find(v[1])!=mp.end())
    {
        int k=stoi(v[2])+t;
        mp[v[1]]=k;
        maxi=max(maxi,mp[v[1]]);
    }
}
int main()
{

}