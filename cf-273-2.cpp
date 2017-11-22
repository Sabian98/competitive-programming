#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,sum=1,sum1=1;
    long long int st;
    cin>>n>>m;
    i=n-m+1;
    for(int j=1;j<=i;j++)
    {
        sum=sum*j;
    }
    for(int h=1;h<=i-2;h++)
    {
        sum1=sum1*h;
    }
    st=sum/(2*sum1);
    if(m==1)
    {
        cout<<2*n <<2*n<<"\n";
    }
    else if((n-m)==1)
    {
        cout<<1 <<1<<"\n";
    }
    else
    {
        cout<<floor(n/2) <<st<<"\n";
    }



    return 0;
}
