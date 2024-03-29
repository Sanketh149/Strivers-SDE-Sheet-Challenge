#include <bits/stdc++.h> 
graphNode* rec(graphNode* node,map<graphNode*,graphNode*>&mp)
{
	graphNode* newNode= new graphNode(node->data);
	mp[node]=newNode;
	vector<graphNode*>v;
	for (auto it: node->neighbours)
	{
		if (mp.find(it)!=mp.end())
		{
			v.push_back(mp[it]);
		}
		else v.push_back(rec(it,mp));
	}
	newNode->neighbours=v;
	return newNode;
	
}
graphNode *cloneGraph(graphNode *node)
{
    map<graphNode*,graphNode*>mp;
	return rec(node,mp);
}