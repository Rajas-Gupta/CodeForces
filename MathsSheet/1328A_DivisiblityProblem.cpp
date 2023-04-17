#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,ans=0;
        cin>>a>>b;
        if(a<b){
            ans=b-a;
            cout<<ans<<endl;
        }
        else{
            int n=a%b;
            if(n==0){
                cout<<0<<endl;
            }
            else{
                ans=b-n;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}