#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int W,cnt=0,m=1;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%lld",&W);
        if(W%2!=0)
        {
            cout<<"Case "<<i+1<<": Impossible"<<"\n";
        }
        else
        {
            m=1;
            while(W%2==0)
            {
                W=W/2;
                m*=2;
            }
            printf("Case %d: %lld %lld\n",i+1,W,m);
        }
    }
    return 0;
}
