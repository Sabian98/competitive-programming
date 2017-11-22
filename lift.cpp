#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,ans;
    cin>>T;
    for(int i=0; i<T; i++)
    {
    cin>>a>>b;
    if(b>a)
    {
        ans=19+4*b;
    }
    else if(a>b)
    {
        ans=(((2*a)-b)*4)+19;
    }
    else
    {
     ans=(a*4)+19;
    }
     cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
