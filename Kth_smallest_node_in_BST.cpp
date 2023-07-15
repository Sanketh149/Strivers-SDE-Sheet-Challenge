void findKthSmall(TreeNode<int>*root, int &ans,int &k){
  if(!root || k <= 0) return;
  findKthSmall(root->left, ans, k); //reverse in-order
  k--;
  if(k == 0){
      ans = root->data;
      return;
  }
  findKthSmall(root->right, ans, k);
}

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int ans = -1;
    findKthSmall(root, ans, k);
    return ans;
}