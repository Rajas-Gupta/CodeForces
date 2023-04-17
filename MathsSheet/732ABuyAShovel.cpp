#include <iostream>
using namespace std;

int main()
{
    int n,r;
    cin>>n>>r;
    int i=1;
    while(1){
        if((((i*n)-r)%10==0) || ((i*n)%10==0)){
            cout<<i;
            break;
        }
        i++;
    }
    return 0;
}