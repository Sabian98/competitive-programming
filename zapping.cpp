#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int a,b,c,d,e;
   while( cin>>a>>b  &&  a!=-1 && b!=-1)


    {
        c=b-a;
        d=100-c;
        if(c>d)
        {
            cout<<d<<"\n";
        }
        else{cout<<c<<"\n";
        }

    }
    return 0;
}
