#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int freq1[n];
    int freq2[9];
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    for(int i=0; i<n; i++){
        freq1[i]=0;
        freq2[i]=0;
    }
    return 0;
}