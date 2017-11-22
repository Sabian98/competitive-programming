
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    long long n,l;
    cin>>n>>l;
    vector<long long>aa;
    bool f1=0,f2=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==0)f1=1;
        if(x==l)f2=1;
        aa.push_back(x);
    }
    sort(aa.begin(),aa.end());
    double mx=-1;
    int lim=aa.size();
    for(int i=1; i<lim; i++)
    {
        mx=max(mx,double(aa[i]-aa[i-1]));
    }
    mx/=2;
    if(!f1)
    {
        mx=max(mx,double(aa[0]));
    }
    if(!f2)
    {
        mx=max(mx,double(l-aa[lim-1]));
    }
    cout<<setprecision(10)<<mx<<endl;
    return 0;
