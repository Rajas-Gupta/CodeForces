#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long k=n/4;
    if(n%2!=0){
        cout<<0;
    }
    else if(n%4==0){
        cout<<k-1;
    }
    else{
        cout<<k;
    }
    return 0;
}