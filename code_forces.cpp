#include<bits/stdc++.h>
using namespace std;
struct code
{
    int valu,ind;
};
int main()
{
    int n,m,a;
    cin>>n>>m;
    queue<code>q;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        code b;
        b.valu=a,b.ind=i+1;
        q.push(b);
    }
    code temp;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        temp.valu-=m;
        if(temp.valu>0)q.push(temp);
    }
    cout<<temp.ind<<endl;


    return 0;
}
