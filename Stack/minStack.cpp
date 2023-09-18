/*
class MinStack
{
public:
    vector<pair<int, int>> pr;

    MinStack() {}

    void push(int val)
    {
        if (pr.size() == 0)
        {
            pr.push_back({val, val});
        }
        else
        {
            pr.push_back({val, min(val, pr.back().second)});
        }
    }
    void pop()
    {
        pr.pop_back();
    }

    int top()
    {
        return pr.back().first;
    }

    int getMin()
    {
        return pr.back().second;
    }
};

*/
