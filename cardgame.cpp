#include<bits/stdc++.h>
using namespace std;
struct as
{
    char c;
    int n;
} df[30];
bool comp(as a,as b)
{
    return a.n>b.n;
}
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<29; i++)
    {
        df[i].n=0;
    }
    for(int i=0; s[i]; i++)
    {
        df[s[i]-'A'].c=s[i];
        df[s[i]-'A'].n++;
    }
    sort(df,df+26,comp);
    int ans=0,i=0;
    while(k && i<26)
    {
        if(k>df[i].n)
        {
            k-=df[i].n;
            ans+=(df[i].n*df[i].n);
        }
        else
        {
            ans+=(k*k);
            k=0;
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
