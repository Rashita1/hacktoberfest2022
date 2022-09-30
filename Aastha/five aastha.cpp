//Function to check whether a binary tree is balanced or not.

int ans = 1;
 
int height(Node* root)
{
      if(root==NULL)
      return 0;
      int hL = height(root->left);
      int hR = height(root->right);
      int hD = hL-hR;
      if(abs(hD)>1)
      ans =  0;
      return hL>hR?hL+1:hR+1;
}  
   
bool isBalanced(Node *root)
{
    //  Your Code here
    height(root);
    return ans;

}
