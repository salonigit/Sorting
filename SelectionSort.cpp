#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

void Selectionsort(int  A[],int n){
    int i,j,k;
    for(int i=0;i<n-1;i++){
        for(int j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
        }
        swap(&A[i],&A[k]);
    }
}

int main(){
    int A[]={5,7,6,1,9,0,2,8,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    Selectionsort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}