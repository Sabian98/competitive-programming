#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,i,l;
    int a[50];
    cin>>n>>k;
    l=0;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
  i=k-1;
  m=a[i];
   for(i=0;i<n;i++)
   {
       if((a[i]>m||a[i]==m) &&(a[i]!=0))
          {
              l++;
          }
   }
   cout<<l;
    return 0;
}
