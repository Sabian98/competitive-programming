#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int T,N;
    long long int andrea,sum;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>N>>s;
        sum=0;
        for(int j=0; j<N; j++)
        {
            if(s[j]=='1')
            {
                sum++;
            }
        }
        andrea=(sum*(sum-1))/2+sum;
        cout<<andrea<<endl;
    }
    return 0;
}
