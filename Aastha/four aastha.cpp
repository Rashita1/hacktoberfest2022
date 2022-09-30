//Function to check if tree is symmetric

bool Symm(struct Node* r1, struct Node* r2)
{
    int b1=1, b2=1, b3=1, b4=1;
    //cout<<r1->data<<"and"<<r2->data<<"are c..d\n";
    
    if(r1->right && r2->left)
    {
        b1= r1->right->data == r2->left->data;
        b3= Symm(r1->right, r2->left);
    }
    
    else b1= r1->right==r2->left;
    
    if(r1->left && r2->right)
    {
        b3= r1->left->data == r2->right->data;
        b4= Symm(r1->left, r2->right);
    }
    
    else b3= r1->left==r2->right;
    
    
    return(b1 && b2 && b3 && b4);
}
