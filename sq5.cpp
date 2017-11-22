#include<bits/stdc++.h>
using namespace std;
int sqr_of_power(int n,int i=2)
{
    if(i==2)
    return n*n;
    else return (sqr_of_power(n,i-1)*n);
}
int main()
{
    int m;
    cin>>m;
    cout<<sqr_of_power(m-3,5)<<endl;
    return 0;
}
