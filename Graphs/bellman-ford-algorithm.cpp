//From a source vertex v, find the shortest distance to all other nodes in the graph. 

//Initially d[v]=0 and for all other elements d[]=infinity
//In each pass, relax all the edges
// for edge(a,b) having weight w, 
    //d[b]=min(d[b],d[a]+w)
//Assuming no negative edge cycle, sice there are n vertices, shortest path can only 
//contain n-1 edges. Therefore, we will get our answer in at most n-1 passes

#include<bits/stdc++.h>
using namespace std;
const int inf=1e7;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
       int u,v,w;
       cin>>u>>v>>w;
       edges.push_back({u,v,w}); 
    }
    int src;
    cin>>src;
    vector<int>dist(n,inf);
    dist[src]=0;
    for(int it=0;it<n-1;it++){
        for(auto e : edges){
            bool change=false;
            int u=e[0];
            int v=e[1];
            int w=e[2];
            if(dist[v]> w + dist[u])
                change=true;
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    for(auto i : dist)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}