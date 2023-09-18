// https://www.tutorialspoint.com/program-to-find-out-the-cells-containing-maximum-value-in-a-matrix-in-python
#include<bits/stdc++.h>
using namespace std;

int solve(vector<string> &input_list)
{
    int xpos = 0;
    int ypos = 0;

    for (string &str : input_list)
    {
      istringstream iss(str);
        int x, y;
        iss >> x >> y;

        if (xpos == 0)
        {
            xpos = x;
            ypos = y;
        }
        else
        {
            xpos = min(xpos, x);
            ypos = min(ypos, y);
        }
    }

    return xpos * ypos;
}

int main()
{
    vector<string> input_list = {"3 5", "4 6", "5 3"};
    cout << solve(input_list) <<endl;
    return 0;
}
