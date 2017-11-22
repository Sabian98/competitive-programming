#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    int i,a;
    cin>>p;
    a=0;
    for(i=0; i<p.size(); i++)
    {

        if((p[i]=='H')||(p[i]=='Q')||(p[i]=='9'))
            a=1;
    }
    if(a)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
