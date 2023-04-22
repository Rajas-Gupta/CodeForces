#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    int tot= abs(a)+abs(b);
    if(tot==s){
        cout<<"YES";
    }
    else if((s-tot)>0 and (s-tot)%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}