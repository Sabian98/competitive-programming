#include <bits/stdc++.h>
using namespace std;
int dirr[]= {1,0,-1,0};
int dirc[]= {0,1,0,-1};
int main()
{
    int t,w,h,par_j,par_k;
    queue<int>q;
    queue<int>r;
    char po[21][21];
    int visited[25][25];
    int par[400];

    memset(par,-1,sizeof(par));
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>w>>h;
        int ans=0;
        for(int j=0; j<h; j++)
        {
            for(int k=0; k<w; k++)
            {
                cin>>po[j][k];
                if(po[j][k]=='@')
                {
                    par_j=j;
                    par_k=k;
                }
            }


        }
        memset(visited,0,sizeof(visited));
        q.push(par_j);
        r.push(par_k);
        visited[par_j][par_k]=1;
        ans++;
        while(!q.empty()&&!r.empty())
        {
            par_j=q.front() ;
            par_k=r.front();
            q.pop();
            r.pop();
            for(int j=0; j<4; j++)
            {
                int x=par_j+dirr[j];
                int y=par_k+dirc[j];
                if(x<0 ||x>=h || y<0 || y>=w)continue;
                if(po[x][y]=='#')continue;
                if(visited[x][y])continue;
                visited[x][y]=1;
                q.push(x);
                r.push(y);
                ans++;
            }

        }
        cout<<"Case "<<i+1<<": "<<ans<<"\n";

    }




    return 0;
}
