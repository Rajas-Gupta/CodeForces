#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        long long num=n/x;
        long long val=num*x;
        if((val+y)<=n){
            cout<<val+y<<endl;
        }
        else{
            cout<<val-x+y<<endl;
        }

    }
    return 0;
}