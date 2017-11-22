#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,m;
    int sum=0;
    cin>>n;
    m=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;

        if((a==1)||(b==1)||(c==1))
        {
            m++;
        }
        if(m>=2)
    {
        sum++;
    }
    }

    cout<<sum;
    return 0;
}
