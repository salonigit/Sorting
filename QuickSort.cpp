#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int z=*x;
    *x=*y;
    *y=z;
}

int partition(int A[],int l,int h){
    int j=h,i=l;
    int pivot =A[l];
    do{
    do{
        i++;
    }while(A[i]<=pivot);
    do{
        j--;
    }while(A[j]>pivot);
    if(i<j){
        swap(&A[i],&A[j]);
    }
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
}

void Quicksort(int A[],int l,int h){
    int j;
    if(l<h){
    j=partition(A,l,h);
    // cout<<j<<endl;
    Quicksort(A,l,j);
    Quicksort(A,j+1,h);
    }
}

int main(){
    int A[]={5,7,6,1,9,0,2,8,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    Quicksort(A,0,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}