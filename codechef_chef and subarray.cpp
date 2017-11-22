#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int N,a,c,mat;
    cin>>N;
    c=0;
    mat=0;
    for(int i=0; i<N; i++)
    {
        cin>>a;

        if(a!=0)
        {
            c++;
        }
        if(c>mat)
        {
            mat=c;
        }
        if(a==0)
        {

            c=0;
        }


    }

    cout<<mat;




    return 0;
}
