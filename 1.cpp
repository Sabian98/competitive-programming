#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,flag=1;
    cin>>n>>m;


    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=0; j<m; j++)
            {
                cout<<"#"; //printf("%c",#) ;

            }
            cout<<"\n";
        }
        else
        {
            if(flag)
            {
                for(int j=0; j<m-1; j++)
                {
                    cout<<".";

                }
                cout<<"#";
                flag=0;
            }
            else
            {
                cout<<"#";
                for(int j=0; j<m-1; j++)
                {
                    cout<<".";

                }
                //printf("%c",#);
                flag=1;

            }
            cout<<"\n";

        }
    }
    return 0;
}
