#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char op[100];
    int flag=0;
    int y=0,i,j;
    gets(op);
    stack<int>stc;
    for(int x=0; x<strlen(op); x++)
    {
        if(op[x]<='9'&&op[x]>='0')
        {
            y=y*10+op[x]-48;
            flag=1;
        }


        else if(op[x]==',')
        {
            if(flag==1)stc.push(y);
            y=0;
            flag=0;
        }
        else if(op[x]=='+')
        {
            i=stc.top() ;
            stc.pop();
            j=stc.top();
            stc.pop();
            stc.push(i+j);

        }
        else if(op[x]=='-')
        {
            i=stc.top() ;
            stc.pop();
            j=stc.top();
            stc.pop();
            stc.push(j-i);

        }
        else if(op[x]=='*')
        {
            i=stc.top() ;
            stc.pop();
            j=stc.top();
            stc.pop();
            stc.push(i*j);

        }
        else if(op[x]=='/')
        {
            i=stc.top() ;
            stc.pop();
            j=stc.top();
            stc.pop();
            stc.push(j/i);

        }
        else
        {
            break;
        }
    }
    cout<<stc.top();
    return 0;
}
