#include<bits/stdc++.h>
using namespace std;
//int main()
int sieve()
{
    int i,j,val,total=0;

    for(i=2; i<=n; i++) flag[i]=1;

    val=sqrt(n)+1;

    for(i=2; i<val; i++)
        if(flag[i])
            for(j=i; j*i<=n; j++)
                flag[i*j]=0;

    for(i=2; i<=n; i++)
        if(flag[i])
            primes[total++]=i;

    return primes[total];

}
int divno(long long int n)
{
    sieve();
    for(int i=0; primes[i]<=n; i++)
    {
        int cnt=0;

        if(n%primes[i]==0)
        {
            cnt++;
            n=n/primes[i];

        }
    }
    return primes[i],cnt;
}
int sumofdivisors(sum)
{
    int i,val,div,p,s;

    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++)
    {
        if(N%primes[i]==0)
        {
            p=1;
            while(N%primes[i]==0)
            {
                N/=primes[i];
                p=p*primes[i];
            }
            p=p*primes[i];
            s=(p-1)/(primes[i]-1);
            div=div*s;
        }
    }

    if(N>1)
    {
        p=N*N;
        s=(p-1)/(N-1);
        div=div*s;
    }
    return div;

}

int main()
{
    long long int t,m,n,result,cnt_1;
    int sum=1;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m;

        divno();
        cnt_1=cnt*m;
        for(int j=1; j<=cnt_1; j++)
        {
            sum=sum*n;
        }
        res=ssumofdivisors(sum);
        result=result*sum;





    }
    return 0;
}

