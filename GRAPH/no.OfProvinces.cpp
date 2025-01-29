#include <bits/stdc++.h>
using namespace std;

class Solution {
  private: 
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
        vis[node] = 1; 
        ls.push_back(node); 
        // traverse all its neighbours
        for(auto it : adj[node]) {
            // if the neighbour is not visited
            if(!vis[it]) {
                dfs(it, adj, vis, ls); 
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; 
        int start = 0;
        // create a list to store dfs
        vector<int> ls; 
        // call dfs for starting node
        dfs(start, adj, vis, ls); 
        return ls; 
    }

    int provinces(int V, vector<vector<int>> adj ){
        //to convert the matrix into adjacency list
        vector<int> adjList; 
        for(int i=0;i<=V;i++){
            for(int j=0;j<=V;j++){
                if(adj[i][j]==1&&i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);

                }
            }
        }
        
        int vis[V]={0};
        
        int cnt=0;
        for(int i=0;i<=V;i++){
            if(vis[i]==0){
                dfsOfGraph(i);
                cnt++;
            }
        }
        return cnt;
    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
     vector<vector<int>> adj
    {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

        
    Solution ob;
    cout << ob.provinces(3,adj) << endl;

    return 0;
}