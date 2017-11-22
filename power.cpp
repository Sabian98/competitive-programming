#include<bits/stdc++.h>
using namespace std;

int sqr_or_power(int n, int k = 2) // k=2 is default
{
assert(k > 1); // if false program aborts
if (k == 2)
return (n * n);
else
return (sqr_or_power(n, k - 1) * n);
}
int main()
{
    int j;
    cin>>j;
    cout<<sqr_of_power(j)<<endl;
}
