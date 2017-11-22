#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int flag=1,cnt=0,cnt1=0;

    //if (!isupper(s[0]))
    //{
    // s[0]=toupper(s[0]);
    //}


    for(int i=0; i<n; i++)
    {

        if(isupper(s[i]))
        {
            cnt1++;
        }

    }
    if(cnt1==n)
    {
        flag=0;
    }
    //cout<<flag<<endl;

    for(int i=1; i<n; i++)
    {

        if(isupper(s[i]))
        {
            cnt++;  //if all are uppercase
        }

    }
    if(cnt==(n-1))
    {
        flag=0;
    }
    //cout<<n-1<<endl;
    //cout<<flag<<endl;
    if(flag==0)
    {
        for(int i=0; i<n; i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
            else
            {
                s[i]=tolower(s[i]);
            }
        }
    }


    cout<<s<<endl;
    return 0;
}
