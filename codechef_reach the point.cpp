#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int x,y;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>x>>y;
        x=abs(x);
        y=abs(y);
        if((x+y)%2==0)
        {
            if(x>=y)
            {
                cout<<2*x<<endl;
            }
            else
            {
                cout<<2*y<<endl;
            }
        }
        else
        {
            if(x>(y-1))
            {
                cout<<1+(2*x)<<endl;
            }
            else
            {
                cout<<1+2*(y-1)<<endl;
            }
        }
    }
    return 0;
}
