//GFG

class Solution {
  public:
  
    void dfsTraversal(int node,vector<int> adj[],unordered_map<int,bool> &visited,vector<int> &ans){
        ans.push_back(node);
        visited[node]=1;
        
        
        for(auto i:adj[node]){
            if(!visited[i]){
                dfsTraversal(i,adj,visited,ans);
            }
        }
    }
  
    
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        unordered_map<int,bool> visited;
        
        dfsTraversal(0,adj,visited,ans);
        return ans;
        
        
    }
};
