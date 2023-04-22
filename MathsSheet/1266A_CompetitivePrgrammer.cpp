#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int even=0;
        int zero=0;
        bool div3=false;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zero++;
            }
            if((s[i]-'0')%2==0){
                even++;
            }
            sum+=s[i]-'0';
        }
        if(sum%3==0){
            div3=true;
        }
        if(div3 and even>1 and zero>=1){
            cout<<"red"<<endl;
        }
        else if(sum==0){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}