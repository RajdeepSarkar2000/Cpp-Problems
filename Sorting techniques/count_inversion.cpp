//Count the inversions in the given array
//2 elements a[i] and a[j] form an inversion if a[i]>a[j] and i<j.

#include<iostream>
using namespace std;

//time complexity o(nlogn)
long long merge(int a[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int x[n1];
    int y[n2];
    for(int i=0;i<n1;i++){
        x[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        y[i]=a[mid+i+1];
    }
    int i=0,j=0,k=1;
    while(i<n1 and j<n2){
        if(x[i]<=y[j]){
            a[k]=x[i];
            k++;i++;
        }
        else{
            a[k]=y[j];
            inv+=n1-i;
            //x[i]>y[j] and i<j
            k++;j++;
        }

    }
    while(i<n1){
        a[k]=x[i];
        k++;i++;
    }
    while(j<n2){
        a[k]=y[j];
        k++;j++;
    }
    return inv;
}

long long invert(int a[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=invert(a,l,mid);
        inv+=invert(a,mid+1,r);
        inv+=merge(a,l,mid,r);
    }
}




int32_t main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<invert(a,0,n-1)<<endl;
    return 0 ;
}

//brute force 
// int inv=0;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(a[i]>a[j]){
//             inv++;
//         }
//     }
// }