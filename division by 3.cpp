#include <bits/stdc++.h>
using namespace std;
int  main()
{
    long long int a,b,t,rst;
    long long int rs_;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        int sum=0;
        if(a==b)
        {
            if((a-1)%3==0)
            {
                rst=0;
            }
            else
            {
                rst=1;
            }
            cout<<"Case "<<i+1<<": "<<rst<<"\n";
        }
        else if(((a-1)%3==0)||((b-1)%3==0))
        {
            rs_=((b-a+1)*2)/3;
            cout<<"Case "<<i+1<<": "<<rs_<<"\n";
        }
        else if(((b-a+1)*2)%3==0)
        {
            rst=((b-a+1)*2)/3;
            cout<<"Case "<<i+1<<": "<<rst<<"\n";

        }


        else
        {
            rst=(((b-a+1)*2)/3)+1;
            cout<<"Case "<<i+1<<": "<<rst<<"\n";

        }
    }
    return 0;
}



