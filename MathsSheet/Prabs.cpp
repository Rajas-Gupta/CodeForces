#include<iostream>
using namespace std;
void printarray(int a[],int n){
    // int n=sizeof(a)/sizeof(int); we dont do it here
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
void mergesorted(int a[],int b[],int n,int m){
    int i,j,k;
    i=n-1;
    j=m-1;
    k=m+n-1;
    while(i>=0 and j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            k--;
            i--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        }
    }
    while(j>=0){                    //this is loop is to add rest of the elements which are left and not put in final array
        a[k--]=b[j--];    
    }
    while(i>=0){                    //this is loop is to add rest of the elements which are left and not put in final array
        a[k--]=a[i--];    
    }
}
int main(){
    int a[8]={3,4,9,11};
    int b[]={1,2,8,10};
    int n=4;
    int m=sizeof(b)/sizeof(int);
   
    mergesorted(a,b,n,m);
    cout<<endl;
    printarray(a,m+n);
}