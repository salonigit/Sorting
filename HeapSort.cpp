#include<bits/stdc++.h>
using namespace std;

void Heapsortcreate(int A[], int n){
    int i=n,temp=A[i];
    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

int Heapsortdelete(int A[],int n){
    int i,j,x,temp,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=val;
    i=1;j=i*2;
    while(j<n-1){
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }
        else{
            break;
        }
    }
    return val;
}

int main(){
    int A[]={0,10,20,30,25,5,40,35};
    // int n=sizeof(A)/sizeof(A[0]);
    // Heapsortcreate(A,2);
    // Heapsortcreate(A,5);
    // Heapsortcreate(A,9);
    
    // Heapsortdelete(A,n);
    for(int i=2;i<=7;i++){
        Heapsortcreate(A,i);
    }
    for(int i=7;i>1;i--){
        Heapsortdelete(A,i);
    }
    for(int i=1;i<7;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}