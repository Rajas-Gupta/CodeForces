// https://codeforces.com/problemset/problem/1360/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int side=max(min(a,b)*2,max(a,b));
        cout<<side*side<<endl;
    }
    return 0;
}