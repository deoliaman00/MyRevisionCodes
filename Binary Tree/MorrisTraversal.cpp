/*
class Solution
{
public:
    void flatten(Node *root)
    {
        Node *curr = root;
        while (curr != NULL)
        {
            if (curr->left != NULL)
            {
                Node *prev = curr->left;
                while (prev->right)
                {
                    prev = prev->right;
                }
                // ATTACHING THE RIGHT NODE TO THE RIGHT NODE TO THE CURRENT NODE
                prev->right = curr->right;
                
                curr->right = curr->left;
                // MAKING THE LEFT NODE NULL
                curr->left = NULL;
            }

            curr = curr->right;
        }
    }
};

*/