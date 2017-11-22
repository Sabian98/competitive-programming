#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a[100];
    cin>>n;
    int sum=0;
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for( i=0; i<n; i++)
    {
        while(i<n && a[i]!=0)
        {
            sum++;
            i++;
        }
    }
    for( i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            cout<<n<<endl;
        }
    }
    for( i=0; i<n; i++)
    {
        if(a[i]==0)
        {
#include<bits/stdc++.h>
            using namespace std;
            int main()
            {
                int n,i;
                int a[100];
                cin>>n;
                int sum=0;
                for( i=0; i<n; i++)
                {
                    cin>>a[i];
                }
                for( i=0; i<n; i++)
                {
                    while(i<n && a[i]!=0)
                    {
                        sum++;
                        i++;
                    }
                }
                for( i=0; i<n; i++)
                {
                    if(a[i]!=0)
                    {
                        cout<<n<<endl;
                    }
                }
                for( i=0; i<n; i++)
                {
                    if(a[i]==0)
                    {
                        cout<<1<<endl;
                    }
                }
                cout<<sum+1<<endl;
                return 0;
            }







            cout<<1<<endl;
        }
    }
    cout<<sum+1<<endl;
    return 0;
}






