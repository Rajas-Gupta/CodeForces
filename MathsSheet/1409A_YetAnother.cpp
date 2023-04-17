#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int rem = abs(a - b);
        int n = rem / 10;
        if (rem % 10 != 0)
        {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}