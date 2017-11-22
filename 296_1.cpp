#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i=0;
    cin>>a>>b;
    while
    (a!=b)
    {
        if(a>b)
        {a=a-b;
        b=a;
        i++;
        }
        if(b>a)
        {
           b=b-a;
        a=b;
        i++;
        }
    }

    cout<<i+1<<endl;

    return 0;
}
