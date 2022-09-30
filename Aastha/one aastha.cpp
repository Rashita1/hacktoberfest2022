//This is a function to calculate height of a binary tree when its root is given

int height(struct Node* node){
        // code here 
        if(node==NULL)
        return 0;
        int x = height(node->left);
        int y = height(node->right);
        if(x>y)
        return x+1;
        else return y+1;
    }
