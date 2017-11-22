#include<bits/stdc++.h>
using namespace std;
int a[500000];
//int sieve()
int main()
{
    int T;
    long long int L,P,m,q,total;

    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%lld %lld",&P,&L);
        q=P-L;
        int tot=0;
        if(L>q)
        {
            cout<<"Case "<<i+1<<": impossible"<<"\n";
        }
        else
        {
            m=sqrt(q);
            for(int j=1; j<=m; j++)
            {
                if((q%j==0))
                {
                    if(((q/j)!=j))
                    {
                        a[tot]=q/j;
                        a[tot+1]=j;
                        tot=tot+2;
                    }
                    else
                    {
                        a[tot++]=j;
                    }
                }
            }
            sort(a,a+tot);
            printf("Case %d:",i+1);
            int x=0;
            while(a[i]<=L)x++;
            for(int y=x; y<tot; y++)
            {
                if(a[y]>L)
                {
                    printf(" %d",a[y]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
