#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

void Insertionsort(int  A[],int n){     

    int i,j,x;

 for(i=1;i<n;i++)
 {
 j=i-1;
 x=A[i];
 while(j>-1 && A[j]>x)
 {
 A[j+1]=A[j];
 j--;
 }
 A[j+1]=x;
 }
}

int main(){
    int A[]={5,7,6,1,9,0,2,8,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    Insertionsort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}