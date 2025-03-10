#include <bits/stdc++.h>


using namespace std;

class Solution{

private:
    void dfs(int node,vector<int> &vis,stack<int> &st,vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,st,adj);
            }
        }
        st.push(node);
    }
public:

vector<int> topo(int V,vector<int> adj[]){
    vector<int> vis(V,0);
    stack<int> st;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }    
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();

    }
    return ans;
}


};



int main() {

	//V = 6;
	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	vector<int> answer = obj.topo(V, adj);

	for (auto no : answer) {
		cout << no << " ";}
	
	cout << endl;

	return 0;
}