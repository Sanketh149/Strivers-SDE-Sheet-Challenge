#include<bits/stdc++.h>
int recfun(TreeNode<int>*,int&);

int diameterOfBinaryTree(TreeNode<int>*root) {
    int maxdia=0;
    recfun(root,maxdia);
    return maxdia;
}
    
int recfun(TreeNode<int>*root,int &maxdia)
{
    if(root==NULL)
    return 0;
    
    int leftlen=recfun(root->left,maxdia);
    int rightlen=recfun(root->right,maxdia);
    
    maxdia=max(maxdia,leftlen+rightlen);
    return 1+max(leftlen,rightlen);
}