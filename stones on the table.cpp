
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s;
    cin>>n;
    m=0;
    cin>>s;
    for(int i=0; i<n-1; i++)
    {

        if(s[i]==s[i+1])
        {
            m++;
        }
    }

    cout<<m<<endl;
    return 0;
}
