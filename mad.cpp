#include<bits/stdc++.h>
#define pi acos(-1.0)
#define mad (((o1-a1)*(o1-a1))+((o2-a2)*(o2-a2)))
#define mad2 (((b1-a1)*(b1-a1))+((b2-a2)*(b2-a2)))
using namespace std;
int main()
{
    double o1,o2,a1,a2,b1,b2;
    double t,ang1,ang2,r,j,arc;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&o1,&o2,&a1,&a2,&b1,&b2);
        if((o1==a1&&o2==a2)||(b1==a1&&b2==a2)||(o1==b1&&o2==b2))
        {
            printf("Case %d: 0.00000000\n",i+1);
            continue;
        }
        r=sqrt(mad);
        j=sqrt(mad2)/2;
        ang1=acos(j/r);
        ang2=2*((pi/2)-ang1);
        arc=ang2*r;
        printf("Case %d: %.9f\n",i+1,arc);
    }
    return 0;
}
