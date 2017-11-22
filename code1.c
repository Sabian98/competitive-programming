#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    long long int n;
    cin>>n;
    long long x=0,y=0;
    while(x<=n)
    {
        x+=(y*(y+1))/2;
        y++;
    }
    y-=2;
    cout<<y<<endl;
    return 0;
}
