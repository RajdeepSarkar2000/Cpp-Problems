// A coonected component is a subgraph in which any 2 vertices are coonected 
//to each other by paths, and which is connected to additional vertices in the supergraph

//Visit the nodes in depth-first fashion 
//If the node is not visited, visit that node and its neighbour recursively
//Each time a unvisited node is found, a new component will be found

#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
int n,m;
vector<vector<int>>adj;
vector<int>components;

int get_comp(int idx){
    if(vis[idx])
        return 0;
    vis[idx]=true;
    int ans=1;
    for(auto i: adj[idx]){
        if(!vis[i]){
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}

int main(){
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    // for(auto i: components){
    //     cout<<i<<" ";
    // }
    

    //This will be the solution for the question given below
    long long ans=0;
    for(auto i: components){
        ans+=i*(n-i);
    }
    cout<<(ans/2);//to avoid over-counting
    return 0;
}

// there are n friends numbered from 0 to n-1. you have to choose 2 person such that 
// they are not related to each other.
// you are given information in the form of m pairs(x,y) i.e there is a link 
// between friend x and y 
// find out the number of ways in which 2 persons from different groups can be chosen.

//find the component and their sizes 
//at the ith component, choose one person from it and other person from the rest of the groups
