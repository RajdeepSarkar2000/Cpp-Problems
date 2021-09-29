// #include<iostream>
// using namespace std;
// int main(){
// int a = 69;  //initial value
// int* aptr=&a;
// cout<<*aptr<<endl;
// *aptr=20; //updated value
// cout<<a<<endl;

// return 0;
// }
//Pointer in array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={10,20,30};
//     cout<<*a<<endl;
//     int *ptr=a;
//     for(int i=0;i<3;i++){
//         cout<<*ptr<<endl;
//         ptr++;
//     }
// return 0;
// }
//Pointer to pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     cout<<*p<<endl;//value of a
//     int**q=&p;
//     cout<<*q<<endl;//address of p
//     cout<<**q<<endl;//value of a
//     return 0 ;
// }
//Pointer to function
#include<iostream>
using namespace std;


void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
};
int main(){
int a=2;
int b=4;

int *aptr=&a;
int *bptr=&b;
swap(aptr,bptr);
cout<<a<<" "<<b<<endl;

    return 0;
}