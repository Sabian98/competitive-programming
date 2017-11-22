#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,sum,N,i;
    cin>>T;

    for( i=0; i<T; i++)
    {
        cin>>N;
        sum=0;

        for(int j=0; j<N; j++)
        {

            cin>>a;
            if(a>=0)
            {
               sum=sum+a;
            }
        }
          cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
