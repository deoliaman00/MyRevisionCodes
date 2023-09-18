/*

// OPTIMISED APPROACH
pair<int, int> func(struct Node *root)
{
    if (root == NULL)
    {
        pair<int, int> ans1;
        ans1 = make_pair(0, 0);
        return ans1;
    }
    pair<int, int> left = func(root->left);
    pair<int, int> right = func(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
class Solution
{
public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node *root)
    {
        auto it = func(root);
        int ans = it.first;
        return ans;
    }
};

// APPROACH 2
// Function to return the diameter of a Binary Tree.
int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return 1 + max(left, right);
}
int diameter(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int side1 = diameter(root->left);
    int side2 = diameter(root->right);
    int midside = height(root->left) + height(root->right) + 1;

    return max(side1, max(side2, midside));
}

//{ Driver Code Starts.

/* Driver program to test size function*/