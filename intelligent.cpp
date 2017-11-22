#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i=0,sum,n1;
    int f[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,91,97};
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>n;
        for(f[i]=2; f[i]<=n; i++)
        {
            sum=0;
            n1=n;
            while(n1>=f[i])
            {
                sum+=floor(n1/f[i]);
                n1=n1/f[i];
            }
            if(f[i]==2)
            {
                printf("Case %d : %d = 2 (%d) ",j+1,n,sum);
            }
            else if(n==2)
            {
                printf("Case %d : %d = 2 (%d)\n",j+1,n,sum);
            }
            else if(f[i+1]<=n)
            {
                printf("* %d (%d) ",f[i],sum);
            }
            else
            {
                printf("* %d (%d)\n",f[i],sum);
            }

        }

    }
    return 0;
}
