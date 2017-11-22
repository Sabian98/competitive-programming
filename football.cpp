#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a;

    cin>>s;
    a=0;
    if(s.size()<7)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<(s.size()-6); i++)
    {

        if((s[i]==s[i+1])&&(s[i+1]==s[i+2])&&(s[i+2]==s[i+3])&&(s[i+3]==s[i+4])&&(s[i+4]==s[i+5])&&(s[i+5]==s[i+6]))
        {
            a=1;
        }
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
