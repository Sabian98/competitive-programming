#include<bits/stdc++.h>
using namespace std;
int par[1000002];
struct ap
{
    int pos,ind;
} dis[1000002];
int n,k,p;
int parent(int a)
{
    if(par[a]==a)return a;
    else return par[a]=parent(par[a]);
}
void make_union(int a,int b)
{
    int u=parent(a),v=parent(b);
    if(u!=v)par[u]=v;
}
bool comp(ap a,ap b)
{
    return a.ind<b.ind;
}
int main()
{
    scanf("%d%d%d",&n,&k,&p);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&dis[i].ind);
        dis[i].pos=i;
    }
    sort(dis,dis+n,comp);
    for(int i=0; i<n; i++)par[i]=i;
    for(int i=1; i<n; i++)
        if((dis[i-1].ind+k)>=dis[i].ind)
            make_union(dis[i].pos,dis[i-1].pos);
    while(p--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        a--;
        b--;
        if(parent(a)==parent(b))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
