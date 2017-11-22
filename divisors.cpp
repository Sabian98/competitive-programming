#include<bits/stdc++.h>
using namespace std;
#define SIZE_N 10000
#define SIZE_P 10000

bool flag[SIZE_N+5];
int primes[SIZE_P+5];

int seive()
{
    int i,j,total=0,val;

    for(i=2; i<=SIZE_N; i++) flag[i]=1;

    val=sqrt(SIZE_N)+1;

    for(i=2; i<val; i++)
        if(flag[i])
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=0;

    for(i=2; i<=SIZE_N; i++)
        if(flag[i])
            primes[total++]=i;

    return total;
}
int divisor(int N)
{
    int i,val,cnt,sum;

    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++)
    {
        if(N%primes[i]==0)
        {
            cnt=0;
            while(N%primes[i]==0)
            {
                N/=primes[i];
                cnt++;
            }
            sum*=(cnt+1);
        }
    }
    if(N>1)
        sum=sum*2;
    return sum;
}
//bool comp(int m,int n)

int main()
{
    int L,U,N,a[10005],maxx=-1,maxx_1;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>L>>U;
    }
    for(int j=L; j<U; j++)
    {
        a[j]= divisor(j);
    }
for(int j=L; j<U; j++)
{
    if(a[j]>maxx)
    {
        a[j]=maxx;
        if((a[j]==a[j+1])&&(a[j]=maxx))
        {
            maxx_1=j;
        }
    }
}
                                                   //sort(a,a+U-L,comp);
cout<<"Between "<<L<<"and "<<U<<", "<<maxx_1<<"has a maximum of "<<maxx<<"divisors."<<"\n";


    return 0;
}



