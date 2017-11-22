#include <bits/stdc++.h>
using namespace std;

int gcdr ( int a, int b )
{
    if(a>b)
    {
        if ( a==0 ) return b;
        return gcdr ( b%a, a );
    }
    else
    {
        if ( b==0 ) return a;
        return gcdr ( a%b, b );
    }
}
int main()
{
    int x,y,n,b,c,flag;
    cin>>x>>y>>n;
    while(flag==0)
    {
        b=gcdr(x,n);
        //cout<<b<<endl;
        //flag=0;
        if (b!=0)
        {
            flag=1;
            c=gcdr(y,n-b);
            if(c==0)
            {
                flag=3;
                break;
            }
            flag=0;
        }
        else
        {
            flag=2;
            break;
        }
    }
    //cout<<flag<<endl;
    //print
    if(flag==2)
    {
        cout<<0<<endl;
    }
    if(flag==3)
    {
        cout<<1<<endl;
    }

    return 0;
}
