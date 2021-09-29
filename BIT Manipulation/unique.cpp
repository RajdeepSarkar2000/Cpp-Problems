// #include<iostream>  1 unique from an array
// using namespace std;
//   int unique(int a[],int n){
//         int xorsum=0;
//         for(int i=0;i<n;i++){
//             xorsum=xorsum^a[i]; //since xor of a number with itself is zero
//         }
//         return xorsum;
//     }
// int main(){
//   int a[]={1,2,3,4,1,2,3};
//   cout<<unique(a,7)<<endl;
//     return 0;
// }

// #include<iostream>//2 unique nos where all other nos are present twice
// using namespace std;
// int setBit(int n,int pos){
//     return((n & (1<<pos))!=0); // Sets the bit at the given position as 1
// }
// void unique(int a[],int n){
// int xorsum=0;
// for(int i=0;i<n;i++){
//     xorsum=xorsum^a[i];
// }
// int setbit=0;
// int pos=0;
// int tempxor=xorsum;
// while(setbit!=1){
//     setbit=xorsum & 1;
//     pos++;
//     xorsum=xorsum>>1;
// }
// int newxor=0;
// for(int i=0;i<n;i++){
//     if(setBit(a[i],pos-1)){
//         newxor=newxor^a[i];
//     }
// }
// cout<<newxor<<endl;
// cout<<(tempxor^newxor)<<endl;
// }


// int main(){
//     int a[]={1,2,3,1,2,3,5,7};
//     unique(a,8);
//     return 0;
// }


#include<iostream>//unique no where all other nos are present thrice
using namespace std;

bool getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setBit(int n,int pos){
    return n | 1<<pos;
}

int unique(int a[],int n){
    int result =0 ;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(a[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}



int main(){
    int a[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(a,10)<<endl;
    return 0;
}