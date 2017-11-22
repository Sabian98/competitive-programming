#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m=0,b=1,a,c;
    cin>>n;
    k=n;

    if(n==1)
    {
        cout<<"Sheldon"<<endl;
    }
    else if(n==2)
    {
        cout<<"Leonard"<<endl;
    }
    else if(n==3)
    {
        cout<<"Penny"<<endl;
    }
    else if(n==4)
    {
        cout<<"Rajesh"<<endl;
    }
    else if(n==5)
    {
        cout<<"Howard"<<endl;
    }
    else
    {
        while(n>5)
        {
            n=n/(5*((2*m)+1));
            m++;
        }
    }
    //cout<<m<<endl;
    if(m>1)
    {
        for(int i=1; i<=m; i++)
        {
            b=2*b;
        }
    }
    c=b*2;
    a=k-n;
//cout<<a<<endl;
    if(0<(a/c)<=1)
    {

        cout<<"Sheldon"<<endl;
    }
    else if(1<(a/c)<=2)
    {
        cout<<"Leonard"<<endl;
    }
    else if(2<(a/c)<=3)
    {

        cout<<"Penny"<<endl;
    }
    else if(3<(a/c)<=4)
    {
        cout<<"Rajesh"<<endl;
    }
    else
    {
        cout<<"Howard"<<endl;
    }
    return 0;

}
