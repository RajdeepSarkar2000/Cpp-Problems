//its vertices can be divided into 2 disjoint and independent sets 
//u and v such that every edge connects a vertex in u to one in v
//the graph does not contain any odd length cycles
//the graph is 2 colorable(1 node is one color so neighbour must be of another color)

//traverse the graph
//if the current node is of red color, paint is neighbours as blue
//if you are able to color the graph successfully, then the graph is bipartite

#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
int n,m;
vector<vector<int>>adj;
vector<int>col;
bool bipart;
void color(int u,int curr){
    if(col[u]!=-1 and col[u]!=curr){
        bipart=false;
        return ;
    }
    col[u]=curr;
    if(vis[u])
        return;
    vis[u]=true;
    for(auto i: adj[u]){
        color(i,curr xor 1);//shortcut for if value is 0 then return 1 and if 1 return 0
        
    }

}

int main(){
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    col=vector<int>(n-1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            color(i,0);
        }
    }
    if(bipart)
        cout<<"Graph is bipartite";
    else{
        cout<<"Graph is not bipartite";
    }
    
    return 0;
}