#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,string> >v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            string b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        int Donoone=0,rightone=0,leftone=0;
        int mindono=INT_MAX;
        int minright=INT_MAX;
        int minleft=INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i].second == "11"){
                Donoone=v[i].first;
                mindono=min(Donoone,mindono);
            }
            if (v[i].second=="01")
            {
                rightone=v[i].first;
                minright=min(minright,rightone);
            }
            if (v[i].second=="10")
            {
                leftone=v[i].first;
                minleft=min(minleft,leftone);
            }
        }
        // int ans = min(mindono,minright+minleft);
        int ans=0;
        if(mindono==INT_MAX && (minright ==INT_MAX || minleft ==INT_MAX)){
            ans=-1;
        }
        else if(minright==INT_MAX || minleft==INT_MAX){
            ans=mindono;
        }
        else{
            ans = min(mindono,minright+minleft);
        }
        cout<<ans<<endl;
    }
    return 0;
}