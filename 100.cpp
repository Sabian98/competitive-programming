#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,p,k,max;
    int j=0;
    int n[100000];
    while(scanf("%lld%lld",&a,&b))
    { max=-1;
    p=0;
    for( k=a;k<=b;k++)
    {
        j++;

         if(k==1)
        break;
        else if
        (k%2==0)
        { k=k/2;
        p++;
        }
        else
        {k=(3*k) +1;
            p++;
        }
        n[j]=p;
    }
    for(j=1;j<=b-a;j++)
    {
        if(n[j]>n[j+1])
        {max=n[j];
        }

    }
   cout<<max<<"\n";
    }
    return 0;
}
