#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int a_,b_,c,d,m,n,rs,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        scanf("%d %d",&m,&n);
        if(m==1||n==1)
        {
            rs=m*n;
        }
        else if(m==2&&n==2)
        {
            rs=4;
        }
        else if(m==2||n==2)
        {
            if(m==2)
            {
                a_=n%4;
                b_=n/4;
                if(a_==1)
                {
                    rs=(b_*4)+2;
                }
                else if(a_==0)
                {
                    rs=b_*4;
                }
                else
                {
                    rs=(b_*4)+4;
                }
            }
            else
            {
                c=m%4;
                d=m/4;
                if(c==1)
                {
                    rs=(d*4)+2;
                }
                else if(c==0)
                {
                    rs=d*4;
                }
                else
                {
                    rs=(d*4)+4;
                }
            }
        }
        else if((m ==3&&n == 3)||(n == 3&&m == 3))
        {
            rs=4;
        }
        else if((m == 3&&n == 4)||(n == 4&&m == 3))
        {
            rs=5;
        }
        else if(((m*n)%2)==0)
        {
            rs=((m*n)/2);
        }
        else
        {
            rs=((m*n)/2)+1;
        }
        cout<<"Case "<<i+1<<": "<<rs<<"\n";
    }
    return 0;
}



