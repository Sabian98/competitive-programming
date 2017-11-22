#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int T,n;
    double R,theta;
    double r;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>R>>n;
        theta=(pi/n);
        r=((R*sin (theta))/(1+sin(theta)));
        printf("Case %d: %.10lf\n",i+1,r+1e-8);
//        cout<<"Case "<<i+1<<": "<<r<<endl;
    }


    return 0;
}
