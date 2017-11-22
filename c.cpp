
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,sum=0;
    cin>>a;
    if(a<0)
    {
        for(long long int i=1; i>=a; i--)
        {
            sum=sum+i;
        }

    }
    else if(a>0)
    {
        for(long long int i=1; i<=a; i++)
        {
            sum=sum+i;
        }
    }
    else{

        sum=1;
    }


    cout<<sum<<endl;

    return 0;
}
