#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x==y){
            cout<<"YES"<<endl;
        }
        else if(x>3){
            cout<<"YES"<<endl;
        }
        else if(x==1 and y==1){
            cout<<"YES"<<endl;
        }
        else if(x==2 and (y==1 or y==3)){
            cout<<"YES"<<endl;
        }
        else if(x==3 and (y==2 or y==1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}