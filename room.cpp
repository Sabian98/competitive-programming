#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,p,q;
cin>>n;
int sum=0;
for(int i=0;i<n;i++)
{
    cin>>p>>q;
    if((q-p)>=2)
    {
        sum++;
    }
}
cout<<sum<<endl;
return 0;
}
