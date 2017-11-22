#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int a[1000],b[1000],c[1000],n,i;
    int m=numeric_limits<int>::min();
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    c[0]=b[0]-a[0];
    for(i=1;i<n;i++)
    {
        c[i]=(b[i]-a[i])+c[i-1];

    }
    for(int i=0;i<n;i++)m=max(c[i],m);
    cout<<m<<endl;



    return 0;
}

