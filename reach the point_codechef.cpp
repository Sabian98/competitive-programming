#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,x,y;
    double andrea;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>x>>y;
        if((x==0)&&(y!=0))
        {
            y=abs(y);
            if(y%2==0)
            {
                andrea=2*y;
                cout<<andrea<<endl;
            }
            else
            {
                andrea=(2*y)+1;
                cout<<andrea<<endl;
            }
        }
        else if((x!=0)&&(y==0))
        {
            x=abs(x);
            if(x%2==0)
            {
                andrea=2*x;
                cout<<andrea<<endl;
            }
            else
            {
                andrea=(2*x)-1;
                cout<<andrea<<endl;
            }
        }
        else
        {
            andrea=(sqrt((x*x)+(y*y)))*sqrt(2);
            cout<<floor(andrea)<<endl;
        }
    }
    return 0;
}
