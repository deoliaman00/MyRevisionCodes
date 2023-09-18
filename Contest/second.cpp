#include <bits/stdc++.h>
using namespace std;

string sortVowels(string s)
{
    vector<pair<char, int>> mp;


    string str = "oEOee";
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
               mp.push_back(make_pair(str[i], i));
        } 
    }
    sort(mp.begin(), mp.end());
    string ans=s;
    for (auto it : mp)
    {
        ans[it.second]=it.first;
    }
    return ans;
}


int main()
{
    string str = "lEetcOde";
     cout << sortVowels(str) << endl;
}