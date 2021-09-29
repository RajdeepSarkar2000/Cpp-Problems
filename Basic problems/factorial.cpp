#include<iostream>
using namespace std ;

int fact(int n){
    int fact1=1;
    for(int i=2;i<=n;i++){
        fact1*=i;
    }
    return fact1;

}

int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0 ;
}