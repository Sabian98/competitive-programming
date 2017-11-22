#include<bits/stdc++.h>
using namespace std;
 #define pi 2*acos(0.0)
int main()
{
    int T;
    double r,s;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>r;
        s=(4-pi)*r*r+(1/1000000000);
        printf("Case %d: %.2lf\n",i+1,s);
    }

return 0;
}
