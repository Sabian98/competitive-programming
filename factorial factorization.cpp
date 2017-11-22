#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,n1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int sum=0;
        for(int j=2;j<=n;j++)
        {
            n=n1;
            while(n>j)
            {
                sum=sum+floor(n/j);
                n1=n1/j;
            }
            if(j==2)
            {
            printf(" %d =2 ()
            }
        }
       // cout<<sum<<"\n";
    }


   return 0;
}
