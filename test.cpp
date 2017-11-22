#include<bits/stdc++.h>
using namespace std;
int main()
{
        int m=numeric_limits<int>::min();
        int a[]={5,1,2,3,4,7,8,10,-255,545};
        for(auto x:a)m=max(x,m);

        cout<<m<<endl;
        return 0;
}
