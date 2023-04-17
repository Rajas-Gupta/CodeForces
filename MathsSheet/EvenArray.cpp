#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int wevenparity = 0;
        int woddparity = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0 && i % 2 != 0)
            {
                wevenparity++;
            }
            else if (arr[i] % 2 != 0 && i % 2 == 0)
            {
                woddparity++;
            }
        }
        if (wevenparity == woddparity)
        {
            cout<< wevenparity<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}