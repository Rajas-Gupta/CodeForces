#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    for(int i=0;i<4;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<3;i++){
        cout<<numbers[3]-numbers[i]<<" ";
    }
    return 0;
}