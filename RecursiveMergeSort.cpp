#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

void Merging(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l,B[10000];
    while(i<=mid && j<=h){
        if(A[i]<=A[j]){
            B[k++]=A[i++];
        }
        if(A[i]>A[j]){
            B[k++]=A[j++];
        }
    }
    while(i<=mid){
        B[k++]=A[i++];
    }
    while(j<=h){
        B[k++]=A[j++];
    }
    for(i=l;i<=h;i++)
        A[i]=B[i];

}

void Mergesort(int A[],int l,int h){
    if(l<h){
    int mid=(l+h)/2;
    Mergesort(A,l,mid);
    Mergesort(A,mid+1,h);
    Merging(A,l,mid,h);
}
}

int main(){
    int A[]={5,7,6,1,9,0,2,8,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    Mergesort(A,0,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}