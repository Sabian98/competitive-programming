
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,p=0;
    while((cin>>N) &&(N>0))
    {
        p++;
        //cout<<p<<endl;
        int m=1;
        int i=0;
        while((m!=N)&&(m<N))
        {
            m=m*2;
            i++;
        }
        //cout<<m<<endl;
        cout<<"Case"<<p<<":"<<i<<"\n";
    }


    return 0;
}
