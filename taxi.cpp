
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,s[100000],ans=0,three=0,two=0,four=0;
    int    one=0;
    cin>>i;
    for(int j=0; j<i; j++)
    {
        cin>>s[j];
        if(s[j]==4)
        {
            ans++;
            four++;
        }
        if(s[j]==3)
        {
            three++;
        }
        if(s[j]==2)
        {
            two++;
        }
        if(s[j]==1)
        {
            one++;
        }

    }
//cout<<ans<<endl;
    ans+=floor(two/2);
    //cout<<ans;
    two=two%2;
    if(one==three)
    {
        ans+=one;
        ans+=two;
    }
    //cout<<two<<endl;
    else if(three>one)
    {
        // cout<<one<<endl;
        ans+=one;        //one is nullified
        three=three-one;
        //cout<<three<<endl; //have some 3s

        ans=ans+three;
        //cout<<ans<<endl;
        ans=ans+two;
        //cout<<ans<<endl;
    }
    else if(one>three)
    {
        ans+=three;
        one=one-three;         //three is nullified
        if(two==1)
        {
            ans++;
            one=one-2;
        }
        ans=ans+one;                     //have some 1s
    }
    else if(four==0&&three==0&&two==0)
    {
        ans+=floor(one/4);
        if(ans%4!=0)
        {
            ans++;
        }
    }
    else if(four==0&&three==0&&one==0)
    {
        ans+=floor(two/2);
        ans+=two%2;
    }
    else if(four==0&&two==0&&one==0)
    {

        ans+=floor(three/3);
        ans+=three%3;
    }
    else
    {
        ans=ans;
    }
    cout<<ans<<endl;
    return 0;
}
