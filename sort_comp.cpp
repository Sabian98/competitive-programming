#include<bits/stdc++.h>
using namespace std;
int cnt=0;
bool comp(int a,int b){
    cnt++;
    return a>b;     ///ascending order
}
int main()
{
    int a[]={6,9,5,10,23};
    sort(a,a+5,comp);       ///sort(first pointer, last pointer, custom comparison )
    for(int i=0;i<5;i++)cout<<a[i]<<" ";
    cout<<endl<<cnt<<endl;
    vector<int>v;
    sort(v.begin(),v.end(),comp);
    return 0;
}

