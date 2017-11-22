#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a;

    cin>>n>>m>>a;

    printf("%lld",(long long int)(ceil(m/a)*ceil(n/a)));
    return 0;
}
