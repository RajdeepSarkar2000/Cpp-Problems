//rat in a maze
#include<iostream>
using namespace std;

bool safe(int** a,int x,int y,int n){
if(x<n && y<n && a[x][y]==1){
    return true;
}
return false;
}
bool maze(int** a,int x,int y,int n,int** sol){
if((x==(n-1)) && (y==n-1)){
    sol[x][y]=1;
    return true;
}


    if(safe(a,x,y,n)){
        sol[x][y]=1;
        if(maze(a,x+1,y,n,sol)){
            return true;
        }
        if(maze(a,x,y+1,n,sol)){
            return true;
        }
        sol[x][y]=0;   //backtracking
        return false;
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    int** a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int[n];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
    }
    int** sol=new int*[n];
    for(int i=0;i<n;i++){
        sol[i]=new int[n];
        for(int j=0;j<n;j++){
            sol[i][j]=0;
        }
    }
    if(maze(a,0,0,n,sol)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<sol[i][j]<<" ";
    }cout<<endl; 
    } 
    }
    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1