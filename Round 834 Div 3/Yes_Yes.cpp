#include <iostream>
#include <string>
using namespace std;
string s="";
int main()
{
    for(int i=0;i<100;i++){
        s+="Yes";
    }
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(s.find(str)!=-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}