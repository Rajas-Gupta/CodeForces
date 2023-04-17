// https://codeforces.com/problemset/problem/1107/B

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long k;
        int n;
        cin>>k>>n;
        cout<<n+(k-1)*9<<endl;
    }
    return 0;
}