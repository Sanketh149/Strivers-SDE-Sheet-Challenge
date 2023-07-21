#include <bits/stdc++.h> 

void bfs( vector<int>&ans , int root , vector<bool>&visited  ,vector<int>adj[]  ){

    visited[root] = 1 ;

    queue<int>q ;

    q.push(root) ;

    while(!q.empty()){

        int t = q.front() ;

        ans.push_back(t);

        q.pop();

        for(auto i : adj[t]){

            if( visited[i]  )continue;

            visited[i] = 1 ;

            q.push(i); 

        }

    }

}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)

{

    // graph formed

    vector<int>adj[vertex+1] ;

    for(auto i : edges){

        int x = i.first ;

        int y = i.second ;

        adj[x].push_back(y);

        adj[y].push_back(x); 

    }

    for(int i =0;i<vertex ;i++){

        sort( adj[i].begin() , adj[i].end() ) ;

    }

    vector<bool> visited(vertex,0) ;

    vector<int>ans ;

    for(int i =0;i<vertex ;i++){

        if( visited[i] )continue ;

        bfs(ans, i , visited , adj ) ;

    }

    return ans ;

}