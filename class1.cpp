#include<iostream>
using namespace std;
class triangle
{int a,b;
public:
    triangle();
    triangle(int,int);
    double area(){return .5*a*b;}
};
 triangle::triangle(int hght,int base)
{
    a=hght;
    b=base;
}
triangle::triangle()
{
  a=5;
  b=4;
}
int main()
{
    triangle tri;
    triangle tria(9,467);
    cout<< "1 st triangle area"<<tri.area()<<endl;
    cout<< "2nd triangle area"<<tria.area()<<endl;
    return 0;
    }












