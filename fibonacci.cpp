#include<bits/stdc++.h>
using namespace std;
int fibonacci(int i)
{
    if(i==1)
    return 1;
    else return fibonacci(i-1)+fibonacci(i-2);
}
int main()
{
    int f,sum=0;
    cin>>f;
    sum+=fibonacci(f);

    cout<<sum<<endl;

}

