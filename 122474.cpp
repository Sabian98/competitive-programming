#include<bits\stdc++.h>
using namespace std;
main()
{
    int a[9][9]= {{0,1,1,0,0,1,0,0,0},
        {0,0,1,0,0,0,1,0,0},
        {0,0,0,0,0,1,1,0,0},
        {0,0,1,0,0,0,0,0,0},
        {0,0,0,1,1,0,0,1,0},
        {0,0,0,1,0,0,0,0,0},
        {0,0,1,0,1,0,0,0,0},
        {0,0,0,1,0,0,0,0,1},
        {0,0,0,0,1,0,0,0,0}
    }
    ;
    int i=0;
    int x,y,s;
    int m[9];//Directory
    int n[9];//Parent
    int p=0;
    queue<int>q;//q is the required queue
    int k[9]= {1,1,1,1,1,1,1,1,1};
    cin>>x;
    cin>>y;
    q.push(x);
    while(1)
    {
        s=q.front();//taking s as front first er

        i++;
        q.pop();
        for(int c=0; c<9; c++)
        {
            if (a[s][c]==1 &&k[c]==1 )

            {
                q.push(c);
                k[c]=k[c]+1;
                m[i]=c;//directory
                 n[i]=s;//parent
                if(c==y)
               {
                   p=1;
               }
            }

        }
        i++;
        if (p==1) break;
        else if(q.empty()) break;

    }

    if(p==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"no";
    }
    for(int c=0;c<9;c++)
{
    if(m[c]!=NULL)
    {
        cout<<m[c]<<endl;
    }

}



}

