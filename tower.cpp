#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    float a,m,z,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>m>>z>>n;
        if((m*m)>((z*z)+(n*n)))
           {
               cout<<"Case #"<<i+1<<" : "<<"Invalid Input"<<endl;
           }
            else
            {
                a=(-(m*m)+(z*z)+(n*n))/(2*z);
                printf("Case # %d:%.2f\n",i+1,a);

         }

    }
  return 0;
}
