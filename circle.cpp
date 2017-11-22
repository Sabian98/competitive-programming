#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return 3.14*x*x;
}
void plot(double func(double),double x_1,double inc,int i)

{
    for(int j=0; j<i; j++)
    {
        cout<<"x:"<<x_1<<"f(x):"<<func(x_1)<<endl;
        x_1+=inc;
    }
}
int main()
{
    plot(f,.01,.01,100);
}
