#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        

        //Side 1
        int x1;
        cin>>x1;
        int arrx1[x1];
        for(int i=0;i<x1;i++){
            cin>>arrx1[i];
        }
        long long maxs1=arrx1[x1-1]-arrx1[0];

        //Side 2
        int x2;
        cin>>x2;
        int arrx2[x2];
        for(int i=0;i<x2;i++){
            cin>>arrx2[i];
        }
        long long maxs2=arrx2[x2-1]-arrx2[0];

        //Side 3
        int x3;
        cin>>x3;
        int arrx3[x3];
        for(int i=0;i<x3;i++){
            cin>>arrx3[i];
        }
        long long maxs3=arrx3[x3-1]-arrx3[0];

        //Side 4
        int x4;
        cin>>x4;
        int arrx4[x4];
        for(int i=0;i<x4;i++){
            cin>>arrx4[i];
        }
        long long maxs4=arrx4[x4-1]-arrx4[0];

        long long a1,a2,a3,a4;
        a1=maxs1*h;
        a2=maxs2*h;
        a3=maxs3*w;
        a4=maxs4*w;
        cout<<max(a1,max(a2,max(a3,a4)))<<endl;
    }
    return 0;
}