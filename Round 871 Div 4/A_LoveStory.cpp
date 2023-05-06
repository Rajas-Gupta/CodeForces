#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    string s="codeforces";   
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(a[i]!=s[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}