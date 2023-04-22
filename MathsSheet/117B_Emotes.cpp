#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<long long>v;
    long long n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<long long>());
    long long max1=v[0];
    long long max2=v[1];
    long long times=m/(k+1);
    long long mod1=m%(k+1);
    long long ans=(max1*k+max2)*times;
    if(mod1>0){
        ans+=max1*mod1;
    }
    cout<<ans;
    return 0;
}