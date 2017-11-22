#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,ans,sum=0;
    cin>>t;
    int a[201];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    for(int i=0; i<t; i++)
    {
        sum+=a[i];
    }
//cout<<sum<<endl;
    for(int i=1; i<=t; i++)
    {
        int cnt=0;

        m=i;

        for(int x=t; x>(t-m); x--)
        {
            cnt+=a[x-1];
        }
        int rest=sum-cnt;
        if(cnt>rest)
        {
            ans=m;
            break;
        }

    }
    cout<<ans<<endl;
    return 0;
}
