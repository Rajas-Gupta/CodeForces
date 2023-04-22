#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int t=0;
    int set1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            set1++;
        }
        t++;
    }
    if(set1>1 && t%2!=0){
        cout<<t/2+1<<endl;
    }
    else{
        cout<<t/2<<endl;
    }
    return 0;
}