#include <iostream>
using namespace std;

class disjointSet{
    vector<int> rank,parent;
public:
    //constructor and establishing the initial configurations
    disjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    // path compression --> the ultimate parent thing 
    int findUPath(int node){
        if(node==parent(node)){
            // node's parent is node itself
            return node;        
        }
        else{
            // node's parent is different node
            // finding the parent of the different node
            // again checking that the next parent is node itself or not 
            // if not then again repeat or if it is then return
            return parent[node]=findUPath(parent[node]);
        }
    }

    // the union by rank is now applied 
    void unionByRank(int u,int v){
        // the ultimate parents of u and v 
        int upu=findUPath(u);
        int upv=findUPath(v);
        // checking the ranks of each and comparing followed by adding them
        if(upu==upv)return;

        if(rank(upu)<rank(upv)){
            // u is smaller than v 
            parent[upu]=upv;
        }
        else if(rank(upu)>rank(upv)){
            parent[upv]=upu;
        }
        else{
            // here the ranks of the upu and upv are the same
            parent[upu]=upv;
            // parent[upv]=upu; this would be okay too
            rank[upv]++;
        }   
    }


};



int main(){

disjointSet ds(7); // this is the initial configuration made by constructor thing
// the edges are being formed 
// and meanwhile we can check the presence of the two nodes in the same components   
ds.unionByRank(1,2);
ds.unionByRank(2,3);
ds.unionByRank(4,5);
ds.unionByRank(6,7);
ds.unionByRank(5,6);
// here we are checking 3 and 7 are in the same components or not 
if(ds.findUPath(3)==ds.findUPath(7)){
    cout<<" yes the are in the same components"<<endl;
}
else{
    cout<<" no the are not in the same components"<<endl;
}
ds.unionByRank(3,7);

return 0;
}