#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int T,x1,x2,y1,y2,M,i;
    int a[100],b[100];
    cin>>T;
    for( i=0;i<T;i++)
    {
        cout<<"Case:"<<i+1<<endl;
        cin>>x1>>y1>>x2>>y2;
        cin>>M;

        for(int j=0;j<M;j++)
        {
            cin>>a[j]>>b[j];

            if(((a[j]>x1&&a[j]<x2)||(a[j]==x1)||(a[j]==x2))&& ((b[j]>y1&&b[j]<y2)||(b[j]==y1)||(b[j]==y2)))
            {
                cout<<"YES"<<endl;

            }
            else
           {
            cout<<"NO"<<endl;

            }
        }
    }
    return 0;
}
