//electrofriends.com > Source Codes > Software Programs > C++ Programs > Data structure > C++ programs for the implementation of Breadth First Search(BFS) for a given graph


///C++ programs for the implementation of Breadth First Search(BFS) for a given graph
//Share on FacebookTweet about this on TwitterDigg thisPin on PinterestShare on LinkedInShare on StumbleUponShare on TumblrShare on Google+Email this to someone


/* Write C++ programs for the implementation of BFS for a given graph */
//brute force PSEUDO BFS.:P


#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,qu[10],front_,rare,v,visit[10],visited[10];

main()
{
    int m;
    cout <<"enter no of vertices";
    cin >> n;
    cout <<"enter no of edges";
    cin >> m;
    cout <<"\nEDGES \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }

    cout <<"enter initial vertex";
    cin >>v;
    cout <<"Visitied vertices\n";
    cout << v;
    visited[v]=1;
    k=1;
    //cout<<front_<<endl;
    while(k<n)
    {
        for(j=1; j<=n; j++)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rare++]=j;
            }
        v=qu[front_++];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}
