#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    cout << (x + y) / z << " ";
    long long min1 = 0;
    if (x % z == 0 && y % z == 0)
    {
        cout << 0 << " ";
    }
    else
    {
        x = x-((x / z)*z);
        y = y-((y / z)*z);
        if (x and y)
        {
            min1 = z - max(x,y);
            if(min1<=min(x,y))
            cout << min1;
            else{
                cout<<0;
            }
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}