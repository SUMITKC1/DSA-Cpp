#include <iostream>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    // //graph in matrix form
    // int adj[n+1][m+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }


    //graph in list form 
    // vector<int> adj[n+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }


    //graph in matrix form{weighted graph}
    // int adj[n+1][m+1];
    // for(int i=0;i<m;i++){
    //     int u,v,w;
    //     cin>>u>>v>>w;
    //     adj[u][v]=w;
    //     adj[v][u]=w;
    // }


    //graph in list form{weighted graph}
    // vector<pair<int,int>> adj[n+1];
    // for(int i=0;i<m;i++){
    //     int u,v,w;
    //     cin>>u>>v,w;
    //     adj[u].push_back(v,w);
    //     adj[v].push_back(u,w);
    // }


return 0;
}