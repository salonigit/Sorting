#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

void Bubblesort(int  A[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
            swap(&A[j],&A[j+1]);
            flag=1;
        }
        }
        if(flag==0){
            break;
        }
    }
}

int main(){
    int A[]={5,7,6,1,9,0,2,8,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    Bubblesort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}