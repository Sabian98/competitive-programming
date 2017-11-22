#include<bits/stdc++.h>
using namespace std;
int total(int i)
{
    int sum=0;
    for( ;i>0;--i)
        sum+=i;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<total(n)<<endl;
}
