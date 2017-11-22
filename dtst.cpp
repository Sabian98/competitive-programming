#include<bits/stdc++.h>
using namespace std;

struct no
{
    int mip;
    int age;
    no *add;
    no()
    {
        mip=0;
        age=0;
        add=0;//memory assigned
    }
    no(int moip,int _age )
    {
        mip=moip;
        age=_age;
        add=0;
    }
    no(int moip,int _age,no* a)
    {
        mip=moip;
        age=_age;//might be useful later
        add=a;

    }
};
no* _main;
void update(int moip,int _age)
{
    no *crt=_main;
    while (crt->add!=0)
    {
        crt=crt->add;
    }
    crt->add=new no( moip, _age);
    return;
}
void google(int moip)
{
    no *crt=_main;
    int pos=0;
    while(crt->add!=0&&crt->mip!=moip)
    {
        pos++;
    }
    if(crt->add==0&&crt->mip!=moip)
        cout<<"not available...search with bing.:P"<<endl;
    else
        cout<<"gracias"<<pos<<endl;
}
int main()
{
    int p,q;
    _main=new no();
    while(cin>>p>>q&&p!=-3)
    {
        update(p,q);
    }
    google(2298);
    return 0;
}


