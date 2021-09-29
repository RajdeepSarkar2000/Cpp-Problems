#include<iostream>
using namespace std;

int main(){
    //check palindrome
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;

    bool check=1;
    for(int i=0;i<n;i++){
        if(a[i] !=a[n-i-1]){
            check=0;
            break;
        }
    }
    if(check==true){
        cout<<"Word is a palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}