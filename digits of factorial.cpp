#include<bits/stdc++.h>
using namespace std;
double arr[1000010];
void fact()
{
    arr[0]=0;
    for(int i=1; i<1000010; i++)
    {
        arr[i]=arr[i-1]+log((double)(i));
    }
}
int main()
{
    int T,n,base,ans;
   // /double sum;
    //double f,g;
    scanf("%d",&T);
    fact();
    //sum=0;
    for(int i=0; i<T; i++)
    {
        scanf("%d %d",&n,&base);
        if(n!=0)
        {

            //sum=0;
            //for(int j=2; j<=n; j++)
            //{
               // f=arr[n];
               // g=log (base);
                //sum=sum+(f/g);
           // }
            ans=floor(arr[n]/log(base))+1;
            cout<<"Case "<<i+1<<": "<<ans<<"\n";
        }
        else
        {
            ans=1;
            cout<<"Case "<<i+1<<": "<<ans<<"\n";
        }
    }
    return 0;
}
