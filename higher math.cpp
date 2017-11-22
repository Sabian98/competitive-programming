#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>a>>b>>c;
        if((c>a)&&(c>b))
        {
            if(c*c==a*a+b*b)
            {
                cout<<"Case "<<i+1<<": "<<"yes"<<endl;
            }
            else
            {
                cout<<"Case "<<i+1<<": "<<"no"<<endl;
            }
        }
        else if((a>c)&&(a>b))
        {
            if(a*a==b*b+c*c)
            {
                cout<<"Case "<<i+1<<": "<<"yes"<<endl;
            }
            else
            {
                cout<<"Case "<<i+1<<": "<<"no"<<endl;

            }
        }
        else
        {
            if(a*a==b*b+c*c)                                        //if((b>a)&&(b>c))
            {
                cout<<"Case "<<i+1<<": "<<"yes"<<endl;
            }
            else
            {
                cout<<"Case "<<i+1<<": "<<"no"<<endl;
            }
        }
    }
    return 0;
}
