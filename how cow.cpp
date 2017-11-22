#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,T,M,x,y;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;
        cin>>M;

        for(int j=0; j<M; j++)
        {
            cin>>x>>y;
            if((x>=x1)&&(x<=x2)&&(y>=y1)&&(y<=y2))
            {
                printf("Yes\n");
            }
            else
            {
               printf("No\n");
            }
        }
    }
    return 0;
}
