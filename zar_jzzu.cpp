#include<bits/stdc++.h>
using namespace std;
struct as {
int val,ind;
};
int main() {
int n,m,a;
cin>>n>>m;
queue<as>q;
for(int i=0; i<n; i++) {
cin>>a;
as b;
b.val=a,b.ind=i+1;
q.push(b);
}
as temp;
while(!q.empty()) {
temp=q.front();
q.pop();
temp.val-=m;
if(temp.val>0)q.push(temp);
}
cout<<temp.ind<<endl;
return 0;
}
