#include<iostream>
using namespace std;
  //wap to check if given number is power of 2
bool ispowerof2(int n){
        return (n && !(n & n-1));   }
int main(){
    int x;
    cin>>x;
  cout<<ispowerof2(x)<<endl;
    return 0;
}