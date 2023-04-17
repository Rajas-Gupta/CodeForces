#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        int kyahoskta=n/2;
        if(kyahoskta%2==0){
            cout<<"YES"<<endl;
            int sum1=arr[0]=2;
            for(int i=1;i<kyahoskta;i++){
                arr[i]=arr[i-1]+2;
                sum1+=arr[i];
            }
            int sum2=arr[kyahoskta]=1;
            for(int i=1;i<kyahoskta-1;i++){
                arr[kyahoskta+i]=arr[kyahoskta+i-1]+2;
                sum2+=arr[kyahoskta+i];
            }
            arr[n-1]=sum1-sum2;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}