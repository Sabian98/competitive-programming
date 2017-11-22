
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,j,flag,flg;
    int a[20];
    cin>>N;

    for(int i =0; i<N; i++)
    {
        flg=1;
        for(  j=0; j<10; j++ )
        {
            cin>>a[j];
        }
    }
    cout<<"Lumberjacks:"<<endl;
        //if(!i)
        for(int i =0; i<N; i++)
        {


        if (a[1]>a[0])flag=1;
        else flag=0;
        for(j=1; j<10; j++)
        {
            if(flag && a[j-1]>a[j])
            {
                flg=0;
                break;
            }
            else if(!flag && a[j-1]<a[j])
            {
                flg=0;
                break;
            }
        }
        if(flg)cout<<"Ordered";
        else cout<<"Unordered";
        if(i!=(N-1))cout<<endl;
    }

    return 0;
}
