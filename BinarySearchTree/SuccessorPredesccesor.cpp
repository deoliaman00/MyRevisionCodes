/*

  void findsucc(Node *root,Node* &succ, int key)
    {
        // so we have a given node already declared
        while(root!=NULL)
        {

            if(key>=root->key)
            {
                root=root->right;
            }
            else
            {
                // this is kept here so that it keeps on getting updated although we have find it
                // to make sure it is the same till the last
                succ=root;
                root=root->left;
            }
        }

    }
    void findPre(Node *root,Node* &pre, int key)
    {
        // so we have a given node already declared
        while(root!=NULL)
        {
            if(key<=root->key)
            {
                root=root->left;
            }
            else
            {
                // this is kept here so that it keeps on getting updated although we have find it
                // to make sure it is the same till the last
                pre=root;
                root=root->right;
            }
        }

    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        findsucc(root,suc,key);
        findPre(root,pre,key);
    }

*/