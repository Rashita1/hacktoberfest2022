//Function to check if two binary trees are identical

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

bool isSame(Node *r1, Node *r2)
{
    if(r1==NULL || r2==NULL)
    return (r1==r2);
    return (r1->data==r2->data && isSame(r1->left, r2->left) && isSame(r1->right, r2->right));
}
