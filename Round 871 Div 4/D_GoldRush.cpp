#include <iostream>
using namespace std;

bool divideKar(int a,int b){
    if(a==0 || a%3!=0 || a<b){
        return false;
    }
    int part=a/3;
    if(part== b || b==part*2){
        return true;
    }
    bool op1=divideKar(a/3,b);
    bool op2=divideKar((a/3)*2,b);
    if(op1 || op2) return true;
    else return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES"<<endl;
        }
        else if(a%3!=0 || a<b){
            cout<<"NO"<<endl;
        }
        else{
            bool found=divideKar(a,b);
            if(found){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}