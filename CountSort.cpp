#include<bits/stdc++.h>
using namespace std;

void Countsort(int A[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    int B[max];
    for(int i=0;i<max+1;i++){
        B[i]=0;
    }
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    int j=0;
    for(int i=0;i<max+1;i++){
        if(B[i]>0){
            A[j]=i;
            j++;
            B[i]--;
        }
        else{
            i++;
        }
    }


}

int main(){
    int A[]={5,7,6,1,9,0,2,8,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    Countsort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}