class Solution {
    vector<vector<int>> adj;
    vector<int> vis;
    bool dfs(int node, int col){
        vis[node] = col;
        for(auto neighbor:adj[node]){
            if (vis[neighbor] == col) return false;
            if (!vis[neighbor]) {
                if (!dfs(neighbor, 3 - col)) return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& g) {
        adj = g;
        int n = adj.size();
        vis.assign(n, 0);
        for (int i = 0; i < n; ++i) {
            if (!vis[i]) {
                if (!dfs(i, 1)) return false;
            }
        }
        return true;
    }
};