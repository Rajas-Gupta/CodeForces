#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt =0;
            if(v[i]==0){
                cnt++;
                for(int j=i+1;j<n;j++){
                    if(v[j]==0){
                        cnt++;
                    }
                    else{
                        i=j;
                        break;
                    }
                }
                ans=max(cnt,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}