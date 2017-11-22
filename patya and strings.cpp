#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    //int cnt=0;
    double flag;
    cin>>s>>t;
    for(int i=0; i<s.size(); i++)
    {
       if(isupper(s[i]))
       {
           s[i]=tolower(s[i]);
       }
       if(isupper(t[i]))
       {
           t[i]=tolower(t[i]);
       }
        if(s[i]==t[i])
        {
            flag=0;
        }
        if(s[i]>t[i])
        {
            flag=1;
            break;
        }
        if(s[i]<t[i])
        {
            flag=-1;
            break;
        }

    }
   // if(cnt==s.size())
   // {
        cout<<flag<<endl;
   // }
   // else{

        //cout<<-1<<endl;
    //}
//cout<<'a'-65;

    return 0;
}
