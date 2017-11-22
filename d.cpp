
#include <bits/stdc++.h>
using namespace std;
int main()
{//int i;
    long long int prod=1,f_prod,l,k;
    string s;
    scanf("%lld",&l);

   cin>>s;
   k=s.length();
    //int k=length(s)-1;
    //int l=s[0]-48;
    //prod=1;
    int n=0;
    if(l%k!=0)
    {
        while((n*k)<l)
        {
            prod=prod*(l-(n*k));
            n++;
        }
        f_prod=prod*(l%k);
    }
    else
    {
        while((n*k)<l)
        {
            prod=prod*(l-(n*k));
            n++;
        }
        f_prod=prod*k;
    }
    cout<<f_prod<<endl;
    return 0;
}
