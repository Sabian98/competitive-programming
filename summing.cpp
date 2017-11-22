#include<bits/stdc++.h>
using namespace std;
int main( )
{
    long long int n;
    int sum,m;
    cin>>n;
    sum=0;
    while(n!=0)
    {
    n % 10==m;
    sum=sum+m;
    n/10==n;
    }
    cout<<sum;
}
