#include<bits/stdc++.h>

#define fib (ceil(sqrt(s))*ceil(sqrt(s)))
#define bday (floor(sqrt(s))*floor(sqrt(s)))

using namespace std;

bool sq(long long int sq_t)
{
    int m;
    m=sqrt(sq_t);
    if(m*m==sq_t)
        return 1;
        else return 0;
}
int main()
{
    long long int s,mid;
    int t,ro,cl;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s;
        if(sq(s))
        {
            if((long long)sqrt(s)%2==0)
            {
                ro=1;
                cl=sqrt(s);
            }
            else
            {
                cl=1;
                ro=sqrt(s);
            }
        }
       else if((long long)fib%2!=0)
        {
            mid=ceil((fib+bday)/2);
            if(s==mid)
            {
                ro=cl=ceil(sqrt(s));
            }
            else if(s>mid)
            {
                ro=ceil(sqrt(s));
                cl=fib-s+1;
            }
            else
            {
                cl=ceil(sqrt(s));
                ro=s-(floor(sqrt(s))*floor(sqrt(s)));
            }
        }
        else
        {
            mid=ceil((fib+bday)/2); //mid=ceil(((ceil(sqrt(s)))+(floor(sqrt(s))))/2);
           // printf("%lld\n",mid);
            if(s==mid)
            {
                ro=cl=ceil(sqrt(s));
            }
            else if(s<mid)
            {
                ro=ceil(sqrt(s));
                cl=s-(floor(sqrt(s))*floor(sqrt(s)));
            }
            else
            {
                cl=ceil(sqrt(s));
                ro=fib-s+1;
            }
        }
        printf("Case %d: %d %d\n",i+1,cl,ro);
    }
}
