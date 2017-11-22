#include<bits/stdc++.h>
using namespace std;
bool prime[1005];
int m[1005];
void sieve()
{
    for(int i=2; i<=1000; i++)prime[i]=1;
    int k=2;
    for(int i=2; i*i<=1000; i++)
    {
        for(int j=k+k; j<=1000; j+=k)
            prime[j]=0;
        k++;
        for(; !prime[k]; k++);
    }
}
int div(int n)
{
    int a=1,b;
    int i=2;
    if(n==0)return 0;
    else if(prime[n] || n==1)return 1;
    while(n!=1)
    {
        if(prime[i])
        {
            b=1;
            while(!(n%i))
            {
                b++;
                n/=i;
            }
            a*=b;
        }
        i++;
    }
    return a;
}
bool comp(int a,int b)
{
    bool s=0;
    int m,n;
    m=div(a);
    n=div(b);
    if(m<n)
    {
        s=1;
    }
    else if((m=n)&&(a>b))
    {
        s=1;
    }
    else
    {
        s=0;
    }
    return s;
}
int main()
{
    int T,n;
    sieve();
    cin>>T;
//    for(int c=0; c<T; c++)
//    {
//        cin>>n;
//    }
    for(int i=1; i<=1000; i++)
    {
        m[i]=i;
    }
    sort(m+1,m+1000,comp);
    for(int c=0; c<T; c++)
    {
        cin>>n;
        cout<<"Case "<<c+1<<":"<<m[n]<<endl;
    }
    return 0;
}
