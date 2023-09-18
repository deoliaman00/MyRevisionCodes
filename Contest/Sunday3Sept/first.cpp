#include <bits/stdc++.h>
using namespace std;

bool check(const std::string &num)
{
    // Check if the string is empty
    if (num.empty())
    {
        return false;
    }

    // Convert the string to an integer
    int integerNum = 0;
    for (char digit : num)
    {
        if (!isdigit(digit))
        {
            return false; // Return false if the string contains non-digit characters
        }
        integerNum = integerNum * 10 + (digit - '0');
    }

    // Check if the integer is divisible by 25
    return (integerNum % 25 == 0);
}
int func(int indx, string &num)
{
    if (indx >= num.size())
    {
        return 0;
    }
    int nottake = 0 + func(indx + 1, num);
    int take = 0;
    if (indx < num.size())
    {
        num.erase(indx, 1);
        if (check(num) == true)
        {
            take = 1 + func(indx + 1, num);
            return min(nottake, take);
        }
    }
    return 0;
}
int minimumOperations(string num)
{
    int ans = func(0, num);
}

int main()
{
    cout << minimumOperations("2245047");
}