#include <bits/stdc++.h> 
TreeNode<int>* preOrderTree(vector<int> &preorder){

    // Write your code here.

      int n=preorder.size();

      stack<TreeNode<int>*>st;

      TreeNode<int>* root= new TreeNode<int>(preorder[0]);

      st.push(root);

      for(int i=1;i<n;i++)

      {

          TreeNode<int>* temp=NULL;

          while(!st.empty() && st.top()->data<preorder[i])

          {

              temp=st.top();

              st.pop();

          }

          if(temp)

          {

              temp->right=new TreeNode<int>(preorder[i]);

              st.push(temp->right);

          }

          else

          {

              temp=st.top();

              temp->left=new TreeNode<int>(preorder[i]);

              st.push(temp->left);

          }

      }

      return root;

}

