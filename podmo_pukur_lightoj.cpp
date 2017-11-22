#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int T,r;
    float b;
    char t;
    long long int n,m,c;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n>>r>>t>>m;

        b=log (m)/log (2);
        c=n-b;
        if(c>0)
        {
            cout<<"Case#"<<i+1<<":"<<c<<endl;
        }
        else
        {
            cout<<"Case#"<<i+1<<":"<<"Impossible"<<endl;
        }
    }

    return 0;
}
