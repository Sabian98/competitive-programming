#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    string s;
    cin>>s;
    int a=s.size();
    if(a<11)cout<<s;
    else cout<<s[0]<<a-2<<s[a-1]<<endl;
    }
    return 0;
}
