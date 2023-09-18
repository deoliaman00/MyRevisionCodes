#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ttl = 0;
set<pair<int, string>> time_map;
unordered_map<string, int> token_map;

void clean(int currentTime)
{
    while (!time_map.empty() && begin(time_map)->first <= currentTime)
    {
        token_map.erase(begin(time_map)->second);
        time_map.erase(begin(time_map));
    }
}
void generate(string tokenId, int currentTime)
{
    token_map[tokenId] = currentTime + ttl;
    time_map.insert({currentTime + ttl, tokenId});
}
void renew(string tokenId, int currentTime)
{
    clean(currentTime);
    auto it = token_map.find(tokenId);
    if (it != end(token_map))
    {
        time_map.erase({it->second, it->first});
        it->second = currentTime + ttl;
        time_map.insert({currentTime + ttl, tokenId});
    }
}
int countUnexpiredTokens(int currentTime)
{
    clean(currentTime);
    return token_map.size();
}

void solve()
{

    int timetolive;
    cin >> timetolive;

    ttl = timetolive;

    int n;
    cin >> n;
    n++;

    while (n--)
    {
        string s;
        getline(cin, s);

        int j = 0, sz = s.size();
        string first = "", second = "", third = "";

        while (j < sz && s[j] != ' ')
        {
            first += s[j++];
        }
        j++;
        while (j < sz && s[j] != ' ')
        {
            second += s[j++];
        }
        j++;
        while (j < sz && s[j] != ' ')
        {
            third += s[j++];
        }

        if (first == "generate")
        {
            int th = stoi(third);
            generate(second, th);
        }
        else if (first == "renew")
        {
            int th = stoi(third);
            renew(second, th);
        }
        else if (first == "count")
        {
            int th = stoi(second);
            cout << countUnexpiredTokens(th) << "\n";
        }
    }
}

int main()
{
    solve();
}