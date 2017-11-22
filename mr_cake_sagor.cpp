#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b;
    long long int M;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>M;
        a=M %12;
        if((a<7)&&(a!=0))
        {
            cout<<"Case #"<<i+1<<" : "<<a<<endl;
        }
        else if((a>7)||(a==7))
        {
            b=(12-a)+2;
            cout<<"Case #"<<i+1<<" : "<<b<<endl;
        }
        else
        {

             cout<<"Case #"<<i+1<<" : "<<2<<endl;
        }
    }
    return 0;
}
