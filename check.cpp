

    #include<bits/stdc++.h>
    using namespace std;
    int r[]={0,-1,0,1};
    int c[]={1,0,-1,0};
    int main(){
    int n;
    cin>>n;
    char s[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin>>s[i][j];
    }
    }
    int cnt=0;
    bool flag=1;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cnt=0;
    for(int k=0;k<4;k++){
    if((i+r[k])<0 || (i+r[k])>=n || (j+c[k])<0 || (j+c[k])>=n)continue;
    else {
    if(s[i+r[k]][j+c[k]]=='o')cnt++;
    }
    }
    if(cnt&1){
    flag=0;
    break;
    }
    }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
    }
