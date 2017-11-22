#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(__builtin_popcount(n)%2==0)
        {
            cout<<"Case "<<i+1<<": "<<"even"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<"odd"<<endl;
        }
    }

    return 0;
}
