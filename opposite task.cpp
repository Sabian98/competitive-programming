#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,a,b;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>n;
        if((n%2)==0)
        {
            a=n/2;
            b=n-a;
        }
        else
        {
            a=ceil(n/2);
            b=n-a;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
