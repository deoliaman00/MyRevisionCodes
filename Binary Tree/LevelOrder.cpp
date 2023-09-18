/*

-----------------SIMPLE LEVEL ORDER TRAVERSAL-----------------------------------------------
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        queue<TreeNode *> qt;
        qt.push(root);
        if (root == NULL)
        {
            return ans;
        }
        while (!qt.empty())
        {
            vector<int> a1;
            int n = qt.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = qt.front();
                a1.push_back(temp->val);
                qt.pop();
                if (temp->left != NULL)
                {
                    qt.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    qt.push(temp->right);
                }
            }
            ans.push_back(a1);
        }
        return ans;
    }
};



class Solution
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        // lets do it baby
        vector<int> ans;
        queue<Node *> qt;
        qt.push(root);
        bool ltr = true;
        while (!qt.empty())
        {

            int N = qt.size();
            vector<int> temp(N);

            for (int i = 0; i < N; i++)
            {
                Node *temp1 = qt.front();
                qt.pop();

                //----------MAKING THEM REVERSE AND ORDERED AGAIN------------------

                int indx = ltr ? i : N - i - 1;
                temp[indx] = temp1->data;

                if (temp1->left)
                {
                    qt.push(temp1->left);
                }
                if (temp1->right)
                {
                    qt.push(temp1->right);
                }
            }
            //-------------FOR THE NEXT LEVEL CHANGING IT----------------------------
            ltr = !ltr;
            for (auto it : temp)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }
};
...................................................................................................................................................................................
116. Populating Next Right Pointers in Each Node
    O(N)=> time complexity
    O(N)=> space complexity

    Node* connect(Node* root)
    {
        vector<vector<int>> ans;
        queue<Node *> qt;
        qt.push(root);
        if (root == NULL)
        {
            return root;
        }
        while (!qt.empty())
        {
            vector<int> a1;
            int n = qt.size();
            for (int i = 0; i < n; i++)
            {
                Node *temp = qt.front();

                a1.push_back(temp->val);
                qt.pop();

                // This is the condition where we set it
                 if(i+1==n)
                {
                    temp->next=NULL;
                }
                else
                {
                    temp->next=qt.front();
                }
                // This is the condition where we set it

                if (temp->left != NULL)
                {
                    qt.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    qt.push(temp->right);
                }
            }
            ans.push_back(a1);
        }
        return root;

    }

*/