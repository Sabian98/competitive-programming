#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int o1,o2,a1,a2,b1,b2;
    float rad,act_ang,ang,ja,arc,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>o1>>o2>>a1>>a2>>b1>>b2;
        if((o1==a1&&o2==a2)|(b1==a1&&b2==a2)|(o1==b1&&o2==b2))
        {
            printf("Case %d: 0.00000000\n",i+1);
            continue;
        }

        rad=sqrt(((o1-a1)*(o1-a1))+((o2-a2)*(o2-a2)));
        ja=(sqrt(((b1-a1)*(b1-a1))+((b2-a2)*(b2-a2))))/2;

        ang=acos(ja/rad);
        //cout<<ang<<endl;
        act_ang=2*((pi/2)-ang);
        arc=act_ang*rad;
        // cout<<pi<<endl;
        //cout<<"Case "<<i+1<<": "<<arc<<endl;
        printf("Case %d: %.9f\n",i+1,arc);
    }
    return 0;
}
