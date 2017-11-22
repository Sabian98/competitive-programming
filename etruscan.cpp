#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int a,b;
    unsigned long long int k,n;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        k=(-1+sqrt(1+8*n))/2;
        cout<<floor(k)<<"\n";
    }
    return 0;
}
