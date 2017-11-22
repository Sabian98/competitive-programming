
#include<bits/stdc++.h>
using namespace std;
int dp[10005];
#define ma_x 10000007
int a,b,c,d,e,f;
int F(int n)
{
    if(n==0) return a%ma_x;
    if( n == 1 ) return b%ma_x;
    if( n == 2 ) return c%ma_x;
    if( n == 3 ) return d%ma_x;
    if( n == 4 ) return e%ma_x;
    if( n == 5 ) return f%ma_x;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    else
    {
        dp[n]=( F(n-1)%ma_x + F(n-2)%ma_x + F(n-3)%ma_x + F(n-4)%ma_x + F(n-5)%ma_x + F(n-6)%ma_x)%ma_x;
        return dp[n];
    }
}
    int main()
    {
        int n, caseno = 0, cases;
        scanf("%d", &cases);
        //for(int i=0;i<10000;i++)
       // {
           // dp[i]=-1;
       // }
        while( cases-- )
        {
            memset(dp,-1,sizeof(dp));//
            scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
            printf("Case %d: %d\n", ++caseno, F(n) % 10000007);
        }
        return 0;//return 0;
    }
