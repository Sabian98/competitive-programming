#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,cnt=0;
    int a[1000];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<n<<endl;
    }
    else
    {
         for(int i=0; i<n; i++)
         {
             if (a[i]!=0)
             {
                 cnt++;
             }
         }

    }
    cout<<cnt<<endl;

    return 0;
}
