#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int e,init_no,init_dest;
    int visited[100];
    memset(visited,0,sizeof(visited));
    int par[100];
    memset(par,-1,sizeof(par));
    char dest;
    char node;

    int ar[11][11]= {{0,1,1,0,0,1,0,0,0,0,0},//A
        {0,0,1,0,0,0,1,0,0,0,0},//B
        {
            0,0,0,0,0,1,0,0,0,0,0//C
        },
        {
            0,0,1,0,0,0,0,0,0,0,0//D
        },
        {
            0,0,0,1,0,0,0,0,0,1,0//E
        },
        {
            0,0,0,1,0,0,0,0,0,0,0//F
        },
        {
            0,0,0,0,1,0,0,0,0,0,0//G

        },
        {
            0,0,0,0,0,0,0,0,0,0,0//H
        },
        {
            0,0,0,0,0,0,0,0,0,0,0//I
        },
        {
            0,0,0,1,0,0,0,0,0,0,1//J
        },
        {
            0,0,0,0,1,0,1,0,0,0,0//K
        }
    };

//cin>>e;//no of vertices
    //cout<<"enter source node"<<endl;
    cin>>node;//source node
    init_no=node-65;
    //cout<<"enter destination node"<<endl;
    cin>>dest;
    init_dest=dest-65;

    q.push(init_no);
    visited[init_no]=1;
    while(!q.empty())
    {
        init_no=q.front() ;
        q.pop();
        for(int i=0; i<11  ; i++)
        {
            if((ar[init_no][i])==1 &&visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
                par[i]=init_no;
            }
        }
    }
    ///PRINT///
    if(visited[init_dest]==0)
    {
        cout<<"path not possible" <<endl;
    }
    else
    {
        stack<int>way;
        way.push(init_dest);
        while(par[init_dest]!=-1)
        {
            way.push(par[init_dest]);
            init_dest=par[init_dest];
        }
        cout<<"ok"<<endl;
        cout<<"path is:"<<char(way.top()+65);
        way.pop();
        while(!way.empty())
        {
            cout<<"- >"<<char(way.top()+65);
            way.pop();
        }
        //cout<<
    }

    return 0;


}

