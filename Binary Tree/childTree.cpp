/*
bool func(Node *root)
{
    if(root==NULL)return 0;
    int cSum=0;
    if(root->left)cSum+=root->left->data;
    if(root->right)cSum+=root->right->data;

    if(cSum<root->data)
    {
        if(root->left)root->left->data=root->data;
        if(root->right)root->right->data=root->data;
    }

    func(root->left);
    func(root->right);

    int rootSum=0;
    if(root->left)rootSum+=root->left->data;
    if(root->right)rootSum+=root->right->data;
    if(root->left || root->right)
    {
        root->data=rootSum;
    }
}

*/