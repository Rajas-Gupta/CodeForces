#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans=0;
        ans=n/2;
        if(n%2==0){
            ans--;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}