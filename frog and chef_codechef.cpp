#include<bits/stdc++.h>
using namespace std;
int par[100000];
struct samaun
{
    int u,v;
} c[100000];
int N,K,P;
bool comp(samaun a,samaun b)
{
    return a.v<b.v;
}
          //parent of itself

int find_rep(int g)
{
    if(par[g]==g)
        return g;
    else return par[g]=find_rep(par[g]);
}
void frog(int i,int k)
{
    int m=find_rep(i);
    int n=find_rep(k);
    if(m!=n)
    {
        par[m]=n;
    }
}

int main()
{

    cin>>K>>N>>P;
    for(int i=0; i<N; i++)
    {
        cin>>c[i].v;
        c[i].u=i;
    }

    sort(c,c+N,comp);
    //built in sort

    for(int i=0; i<N; i++)
    {
        par[i]=i;
    }
    for(int i=0; i<N; i++)
    {
        if ((c[i-1].v+K)>=c[i].v)
        {
            frog(c[i].u,c[i-1].u);
        }
    }
    while(P--)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if(find_rep(a)==find_rep(b))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
