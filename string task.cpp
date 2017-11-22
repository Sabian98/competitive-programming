
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   char dot='.';
   queue<char>q;
   int  si=s.size();
    for(int i=0;i<si;i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y'&&s[i]!='y')
        {
            q.push(s[i]);
        }
    }
    int qs=q.size();
    for(int j=0;j<qs;j++)
    {
        char c=q.front();
        if(isupper(c))
        {
            c=tolower(c);
        }
    printf("%c",dot);
    printf("%c",c);
    q.pop();
    }


   return 0;
}
