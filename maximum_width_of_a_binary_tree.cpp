#include <bits/stdc++.h> 


int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    queue<TreeNode<int>*>q;
    q.push(root);
    q.push(NULL);
    int maxcnt=INT_MIN;
    int count=0;
    while(!q.empty())
    {  
        auto it=q.front();
        q.pop();
        if(it==NULL)
        {
          maxcnt=max(maxcnt,count);
          count=0;
          if(q.front()!=NULL)
          q.push(NULL);
          continue;
        }
        else
        count++;
        if(it->left!=NULL)
        q.push(it->left);
        if(it->right!=NULL)
        q.push(it->right);
    }
return maxcnt;
}