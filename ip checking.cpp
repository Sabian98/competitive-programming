#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0,k=0,i=0,n[100];
    bool flg;
    int intg[4]= {0,0,0,0};
    //nt bin[4];
    char a[100],b[100];
    cin>>t;

    for(int i=0; i<t; i++)

    {
        gets(a);
        gets(b);
        for(int c=0; c< strlen(a); c++)
        {
            if(a[c]>='0'&&a[c]<='9')
            {
                intg[j]=intg[j]*10+a[c]-48;
                //flg=1;
            }
            else
            {
                j++;
                continue;
            }
        }
        // for(int d=0; d< strlen(b); d++)
        //   {
        //if(b[d]=='0'|b[d]=='1')
        //{
        //bin[k]=bin[k]*10+a[c]-48;
        //flg=1;
        //  }
        //else
        //  {//
        //   k++;
        //    continue;
        // }
        // }
        for(j=0; j<4; j++)
        {
            n[i]=intg[j]%2;
            intg[j]=intg[j]/2;
            i++;

        }
        i=0;
        for(int m=0; m<strlen(b); m++)
        {

            if(b[m]!='.')
            {
                if(b[m]==n[i])
                    flg=1;
                i++;
            }
            else
            {
                continue;
            }
        }

        if(flg)
        {
            cout<<"Case "<<t<<": YES"<<endl;

        }
        else
        {
            cout<<"Case "<<t<<": NO"<<endl;
        }

    }

}

