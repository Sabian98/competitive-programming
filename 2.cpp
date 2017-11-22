#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int p,q,pa[100],qa[101],flag=0,m;
   cin>>n;
   cin>>p;
   for(int i=0;i<p;i++)
   {
       cin>>pa[i];

   }
   for(int j=0;j<q;j++)
   {
       cin>>qa[j];
   }
   m=p+q;
   for(int q=0;q<n;q++)
   {
       for(int i=0;i<m;i++)
       {
           if(q!=m[i])
           {
               flag=1;
           }
       }
   }
   if(flag)
   {


    cout<<"Oh, my keyboard!"<<endl;
   }
   else
   {


    cout<<"I become the guy."<<"\n";
}
    return 0;
}
