#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int t,m,n,rst,b,c,d,a;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {

        scanf("%d %d",&m,&n);
        if(m==1||n==1)
        {
            rst=m*n;
        }
        else if(m==2&&n==2)
        {
            rst=4;
        }
        else if(m==2||n==2)
        {
            if(m==2)
            {
                a=n%4;
                b=n/4;
                if(a==1)
                {
                    rst=(b*4)+2;
                }
                else if(a==0)
                {

                    rst=b*4;
                }
                else
                {

                    rst=(b*4)+4;
                }

            }
            else
            {
                c=m%4;
                d=m/4;
                if(c==1)
                {
                    rst=(d*4)+2;
                }
                else if(c==0)
                {
                    rst=d*4;
                }
                else
                {
                    rst=(d*4)+4;
                }
            }
        }
        else if((m==3&&n==3)||(n==3&&m==3))
        {
            rst=4;
        }
        else if((m==3&&n==4)||(n==4&&m==3))
        {
            rst=5;
        }
        else if((m*n)%2!=0)
        {
            rst=((m*n)/2)+1;
        }
        else
        {
            rst=((m*n)/2);


        }

        cout<<"Case "<<i+1<<": "<<rst<<"\n";

    }

    return 0;

}
