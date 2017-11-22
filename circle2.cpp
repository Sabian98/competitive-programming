#include<bits/stdc++.h>
using namespace std;
const double pi=3.14159;
double circle(double radius)
{
    return pi*radius*radius;
}
double circle(double);
int main()
{
    double x;
    cin>>x;
    cout<<circle(x)<<endl;
    return 0;
}
