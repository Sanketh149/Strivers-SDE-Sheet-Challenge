void dfs(int root ,vector<int>&temp ,vector<int>adj[] , vector<bool>&vis  ){

    vis[root] = 1 ;

    temp.push_back(root) ;

    for(auto i : adj[root] ){

        if(vis[i])continue;

        dfs( i , temp , adj , vis ) ;

    }

    return ;

}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)

{

    // creating adjecency list 

    vector<int>adj[V+1] ;

    for(auto i : edges){

        int x = i[0] ;

        int y = i[1] ;

        adj[x].push_back(y);

        adj[y].push_back(x); 

    }

    // creating visited vector and answer vector of vector to return ans 

    vector<bool> visited(V,0) ;

    vector<vector<int>>ans ;

 

    for(int i=0;i<V ;i++){

        if( visited[i] )continue;

        vector<int>temp ; 

        dfs(i , temp ,adj , visited );

        ans.push_back(temp) ;

    }

 

    return ans;

}