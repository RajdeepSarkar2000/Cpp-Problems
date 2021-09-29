//Linear Search  o(nm)   Brute force
// #include<iostream>
// using namespace std ;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int t ;
//     cin>>t;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==t){
//                 flag=true;
//             }
//         }
//     }
//     if(flag=true){
//         cout<<"Element found\n";
//     }
//     else{
//         cout<<"Element not found\n";
//     }

//     return 0 ;
// }
//Optimised Search 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int t;
    cin>>t;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n and c>=0){
        if(a[r][c]==t){
            flag=true;
        }
        if(a[c][r]>t){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag=true){
        cout<<"Element found\n";
    }
    else{
        cout<<"Element not found\n";
    }
    return 0 ;
}