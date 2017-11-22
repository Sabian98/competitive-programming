
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,T,sum=0;
  cin>>T;
  for(int i=0;i<T;i++)
  {sum#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,T,sum=0;
  cin>>T;
  for(int i=0;i<T;i++)
  {sum=0;
      cin>>a>>b;
      if(a%2==0)
      {
          for (int j=a+1;j<=b;j=j+2)
      {
          sum=sum+j;
      }
      }
      else
        {
            for (int r=a;r<=b;r=r+2)
        {
            sum=sum+r;
        }
      }
        cout<<"Case " <<i+1<<": "<<sum<<endl;
  }
return 0;
}
=0;
      cin>>a>>b;
      if(a%2==0)
      {
          for (int j=a+1;j<=b;j=j+2)
      {
          sum=sum+j;
      }
      }
      else
        {
            for (int r=a;r<=b;r=r+2)
        {
            sum=sum+r;
        }
      }
        cout<<"Case " <<i+1<<": "<<sum<<endl;
  }
return 0;
}
