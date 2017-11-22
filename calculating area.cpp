#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int T,m;
    float R;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>m;
        R=(((pi-2.00)*m*m)/2.00);
        printf("Case # %d:%.2f\n",i+1,R);
    }

    return 0;
}
