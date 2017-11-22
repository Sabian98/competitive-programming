#include<bits/stdc++.h>
using namespace std;
struct node
{
    int id,age;//memory isnt assigned yet
    node* next;
    node()
    {
        id=0;
        age=0;
        next=0;//memory assigned
    }
    node(int _id,int _age)
    {
        id=_id;
        age=_age;//latest node
        next=0;
    }
    node(int _id,int _age,node*p)
    {
        id=_id;
        age=_age;//might be useful later
        next=p;
    }
};
node* root;
void insert(int _id,int _age)
{
    node* cur=root;//
    while(cur->next!=0)
    {
        cur=cur->next;//to go to last node
    }
    cur->next=new node(_id,_age);
    return ;
}
void search(int _id)
{
    node* cur=root;//
    int pos=0;
    while(cur->next!=0 && cur->id!=_id)
    {
        pos++;
        cur=cur->next;
    }
    if(cur->id!=_id && cur->next==0)cout<<"Not found"<<endl;
    else cout<<"Found at "<<pos<<endl;
}
int main()
{
    int a,b;
    root=new node();
    while(cin>>a>>b && a!=-1)
    {
        insert(a,b);
    }
    search(122344);
//    node x;
//    node* y;
//    y=&x;
//    x.id;
//    y->id;
    return 0;
}
/**
122451 22
122450 22
122444 22
122449 22
-1 121
**/
