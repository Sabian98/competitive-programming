#include <bits/stdc++.h>
using namespace std;
int main()

{
    long long int a,b,s;
    cin>>a>>b>>s;
long long    c=abs(a)+abs(b);
    if(a==0&&b==0)
    {
        if(s%2==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;

        }
    }
    if((s>c)||(s<c))
    {
        cout<<"No"<<endl;
    }
    else
    {

        cout<<"Yes"<<endl;
    }


    return 0;
}




