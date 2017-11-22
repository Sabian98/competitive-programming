#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    stack<int> s;
    cin>>a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b==4||b==7)
        {
            s.push(b);
        }
    }
    if(s.size()==7||s.size()==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}



