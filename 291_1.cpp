#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int xo,yo,n,j,x[10000],y[10000];
    float slp;
    cin>>n>>xo>>yo;

    for(int i=0; i<n; i++)
    {

        cin>>x[i]>>y[i];

    }
    n=j;
    slp=(x[0]-xo)/(y[0]-yo);
    //cout<<slp<<endl;
    for(int i=2; i<n-1; i++)
    {
        if(((x[i]-xo)/(y[i]-yo))==slp)
        {
            j--;
        }
    }


    cout<<j+1<<endl;


    return 0;
}
