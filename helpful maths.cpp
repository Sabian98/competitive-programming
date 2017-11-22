
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stringstream st;
    vector <int> m;
    cin>>s;
    st<<s;   ///acts as read or write for string
    int v;
    while(st>>v)
    {


        m.push_back(v);
    }
    sort(m.begin(),m.end());
    int si=m.size();
    for(int i=0; i<si; i++)
    {
        if(i!=0)
        {
            cout<<"+";
        }
        cout<<m[i];
    }
    //{
    //if(istringstream(s[i])>istringstream(s[i+2]))
    //{

    //}
    //}
    //cout<<s<<endl;
    return 0;
}
