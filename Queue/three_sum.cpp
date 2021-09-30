#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
//Bruteforce approach time complexity o(n^3)
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int target;
// cin>>target;
// bool found = false;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         for(int k=j+1;k<n;k++){
//             if(arr[i]+arr[j]+arr[k]==target){
//                 found =true;
//             }
//         }
//     }
// }
// if(found==true){
//     cout<<"TRUE"<<endl;
// }
// else{
//     cout<<"FALSE"<<endl;
// }

//Optimised approach sorted method time complexity o(n^2)
int n;
cin>>n;
int target;
cin>>target;
vector<int>arr(n);
for(auto &i : arr){
    cin>>i;
}
bool found = false;
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    int lo=i+1,hi=n-1;
    while(lo<hi){
        int current= arr[i] + arr[lo] + arr[hi];
        if(current==target){
            found =true;
        }
        if(current<target){
            lo++;
        }
        else{
            hi--;
        }

    }
}
if(found==true){
    cout<<"TRUE"<<endl;
}
else {
    cout<<"FALSE"<<endl;
}

    return 0;
}