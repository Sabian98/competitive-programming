#include<bits/stdc++.h>
using namespace std;
int maxum(int y,int z)
{
   return (y>z?y:z);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<maxum(a,b)<<endl;
    return 0;
}
