#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int n,a,b,d;
    float c;
    cin>>n;
    int s[n];
    a=0;
    b=0;
    for(int i=0;i<n;i++)
{
        cin>>s[i];
            if(s[i]==4)
            {
                a++;
            }
            else
            {b=b+s[i];
            }
    }
    c=b/(n-a);
    d=a+ceil(c);
    cout<<d;
    return 0;
}
