#include <iostream>
using namespace std;

int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long nside=n/a;
    if(n%a>0){
        nside++;
    }
    long long mside=m/a;
    if(m%a>0){
        mside++;
    }
    cout<<nside*mside;
    return 0;
}