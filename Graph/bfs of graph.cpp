//GFG



// void prepareAdjList(unordered_map<int,list<int>> &adjList,vector<int> &adj[]){
    //     for(int i=0;i<n;i++){
    //         int u=
    //     }
    // }
    
    // void bfs(vector<int> adj[],unordered_map<int,bool> &visited,vector<int> &ans,int node){
        
    //     queue<int> q;
    //     q.push(node);
    //     visited[node]=1;
        
    //     while(!q.empty()){
    //         int frntNode=q.front();
    //         q.pop();
            
    //         //store ans
    //         ans.push_back(frntNode);
            
    //         for(auto &i:adj[frntNode]){
    //             if(!visited[i]){
    //                 visited[i]=1;
    //                 q.push(i);
                    
    //             }
    //         }
            
    //     }
        
    // }
    
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        
        
        
        
        
        
        
        // vector<int> ans;
        // unordered_map<int,bool> visited;
        
        // for(int i=0;i<V;i++){
        //     if(!visited[i]){
        //         bfs(adj,visited,ans,i);
        //     }
        // }
        
        // return ans;
        
        
        vector<int> ans, vis(V, 0);
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int front= q.front();
            q.pop();
            ans.push_back(front);
            for(auto &it : adj[front])
            {
                if(!vis[it])
                {
                    q.push(it);
                   
                    vis[it]=1;
                }
                 
            }
        }
        return ans;
        
        
        
        
        
        
        
        
    }
