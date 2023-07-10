#include <bits/stdc++.h> 
vector<int> getLevelOrder(BinaryTreeNode<int> *root)

{

 

vector<int> ans;

if(root==NULL) return ans;

queue<BinaryTreeNode<int>*> q;

q.push(root);

while(!q.empty()){

int size=q.size();

for(int i=0; i<size; i++){

BinaryTreeNode<int>* node=q.front();

q.pop();

if(node->left!=NULL) q.push(node->left);

if(node->right!=NULL) q.push(node->right);

 

ans.push_back(node->val);

}

}

return ans;

}