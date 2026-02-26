class Solution {
  public:
    vector<int> vis;
    int n;
    
    bool cyclic(vector<vector<int>>& g, int nd, vector<int>& vis, int par){
        
        vis[nd] = 1;
        
        for(int& child : g[nd]){
            
            if(!vis[child]){ 
                if(cyclic(g, child, vis, nd)){
                    return 1;
                }
            }
            else if(child != par){ 
                return 1;
            }
        }
        
        return 0;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        n = V;
        vis.assign(n,0);
        vector<vector<int>> g(n);
        
        for(auto& edge : edges){
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i] && cyclic(g, i, vis, -1)){  
                return 1;
            }
        }
        
        return 0;
    }
};