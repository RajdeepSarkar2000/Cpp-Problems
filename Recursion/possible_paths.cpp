// #include<iostream>
// using namespace std;

// int count(int s,int e){
  
//     if(s==e){
//         return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int sum= 0 ;
//     for(int i=1;i<=6;i++){
//         sum+=count(s+i,e);
//     }
//     return sum;
// }


// int main(){
//     int s,e;
//     cin>>s>>e;
//     cout<<count(s,e)<<endl;
//     return 0;
// }


//Possible paths in a maze
#include<iostream>
using namespace std;

int countmaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countmaze(n,i+1,j) + countmaze(n,i,j+1);
}


int main(){
    int n;
    cin>>n;
    cout<<countmaze(n,0,0)<<endl;
    return 0;
}