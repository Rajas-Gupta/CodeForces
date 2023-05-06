#include <iostream>
using namespace std;
bool checkall(int i,int j,int a[1000][1000]){
    if(a[i-1][j]!=0 || a[i+1][j]!=0 || a[i][j-1]!=0 || a[i][j+1]!=0){
        return true;
    }
    else return false;
}
bool checkright(int i,int j,int a[1000][1000]){
    if(a[i][j+1]!=0){
        return true;
    }
    return false;
}
bool checkleft(int i,int j,int a[1000][1000]){
    if(a[i][j-1]!=0){
        return true;
    }
    return false;
}
bool checkneeche(int i,int j,int a[1000][1000]){
    if(a[i+1][j]!=0){
        return true;
    }
    return false;
}
bool checkupar(int i,int j,int a[1000][1000]){
    if(a[i-1][j]!=0){
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while (t--){
        int vol=0;
        int n,m;
        cin>>n>>m;
        int arr[1000][1000];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>0 && j>0 && i<n-1 && j<m-1){
                    if(checkall(i,j,arr)){
                        vol+=arr[i][j];
                    }
                }
                else if(j==0){
                    if(checkright(i,j,arr)){
                        vol+=arr[i][j];
                    }
                }
                else if(j==m-1){
                    if(checkleft(i,j,arr)){
                        vol+=arr[i][j];
                    }
                }
                else if(i==0){
                    if(checkneeche(i,j,arr)){
                        vol+=arr[i][j];
                    }
                }
                else if(i==n-1){
                    if(checkupar(i,j,arr)){
                        vol+=arr[i][j];
                    }
                }
            }
        }
        cout<<vol<<endl;
    }
    return 0;
}