#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int xn=0,yn=0,zn=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        xn+=x;
        yn+=y;
        zn+=z;
    }
    if(xn==0 and yn==0 and zn==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}