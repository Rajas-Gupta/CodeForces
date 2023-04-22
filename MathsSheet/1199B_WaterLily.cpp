#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double h,l;
    cin>>h>>l;
    double num=pow(l,2)-pow(h,2);
    double den=2.0*h;
    cout<<setprecision(13)<<num/den;
    return 0;
}