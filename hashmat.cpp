
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while (cin>>a>>b)
    {
        if(b>a)
        {
            c=b-a;
            cout<<c<<"\n";
        }
        else
        {
            c=a-b;
            cout<<c<<"\n";
        }
    }
    return 0;
}
