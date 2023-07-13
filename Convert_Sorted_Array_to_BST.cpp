#include <bits/stdc++.h> 
TreeNode<int>* rec(vector<int>& nums,int low,int high)

{

    if(low>high)

    return NULL;

    int mid=low+ (high-low)/2;

    TreeNode<int>* root=new TreeNode<int>(nums[mid]);

    root->left=rec(nums,low,mid-1);

    root->right=rec(nums,mid+1,high);

    return root;

}

TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)

{

    // Write your code here.

    return rec(arr,0,n-1);

}