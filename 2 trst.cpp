#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    //freopen("input.txt","r",stdin);
    cin>>n>>m>>k;
    int arr[m],as;
    for(int i=0; i<m; i++)
        cin>>arr[i];
    cin>>as;
    int cnt=0;
    for(int i=0; i<m; i++)
    {
        int s=0;
        int y=arr[i]&(~as);
        for(int j=0; j<(1<<n); j++)
        {
            if(y&(1<<j))s++;
        }
        if(s<=k)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
