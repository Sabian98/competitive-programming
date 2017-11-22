#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int a[1000],b[1000],c[1000],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    c[0]=b[0]-a[0];
    c[0]=max;
    for(i=1;i<n;i++)
    {
        c[i]=(b[i]-a[i])+c[i-1];
        if(c[i]>max)
            c[i]=max;
    }
    cout<<max;



    return 0;
}

