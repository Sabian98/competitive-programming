#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t;
    string s;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>s;
        if((s[1]=='+'&&s[2]=='+')||(s[0]=='+'&&s[1]=='+'))
        {
            i++;
        }
        if((s[0]=='-'&&s[1]=='-')||(s[1]=='-'&&s[2]=='-'))
        {
            i--;
        }
    }
    cout<<i<<endl;


    return 0;
}
