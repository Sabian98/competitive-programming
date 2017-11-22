
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],j;


    for(j=0;j<3;j++)
    {
        cin>>a[j];
    }
    if(a[j]==a[j+1]==a[j+2])
    {cout<<"*";
    }
    else if(a[j+1]==a[j+2]&&(a[j]>a[j+1]||a[j]<a[j+1]))
       {

        cout<<"A";
       }
else if(a[j]==a[j+2]&&(a[j+1]>a[j]||a[j+1]<a[j]))
{cout<<"B";
}
else if(a[j]==a[j+1]&&(a[j+1]>a[j+2]||a[j+1]<a[j+2]))
    {cout<<"C";
    }

    return 0;
}
