//Function to convert a binary tree into its mirror tree
void mirror(Node* node) {
        // code here
        if(node==NULL)
        return;
        Node* temp;
        temp=node->right;
        node->right=node->left;
        node->left=temp;
        if(node->left!=NULL)
        mirror(node->left);
        if(node->right!=NULL)
        mirror(node->right);
    }
