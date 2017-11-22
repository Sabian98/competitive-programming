
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,C,N,sum,p;
    float avg,e;
    int a[1000];
    cin>>C;

    for(i=0;i<C;i++)
    {
        cin>>N;
        sum=0;
        avg=0;
        p=0;
        for(int k=0;k<N;k++)
        {
            cin>>a[k];
            sum=sum+a[k];
            avg=sum/N;
        }

        for(int k=0;k<N;k++)
           {

           if(avg<a[k])
            {
                p++;
            }
         }
         e=((float)p/(float)N)*100;
        printf ("%.3f%%\n",e);
    }
    return 0;
}
