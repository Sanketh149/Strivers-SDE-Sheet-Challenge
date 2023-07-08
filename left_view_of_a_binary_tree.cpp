void helper(TreeNode<int>*root,int level, vector<int>&res) {  

 

  if(root==NULL)return; 

   if(level>res.size())res.push_back(root->data);    

  helper(root->left,level+1,res);    

  helper(root->right,level+1,res); 

 

} 

 

vector<int> getLeftView(TreeNode<int> *root) {   

 

 vector<int>ans;    

 helper(root,1,ans); 

   return ans; 

}