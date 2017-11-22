#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,t,ans;
    int i,flg=0;
    cin>>s>>t;
    i=s.length();
    for(int a=0; a<s.length(); a++)
    {


        if((s[a]-t[a])>1)
        {
            ans[a]=(s[a]+t[a])/2;
            ans[a]=ans[a]+48;

        }
        else
        {
            flg=1;
        }

    }



    if(flg)
    {
        cout<<"No such string"<<endl;
    }
    for(int a=0; a<s.length(); a++)
    {



        cout<<ans[a]<<endl;
    }

    return 0;
}
