#include<bits/stdc++.h>
using namespace std;
double average( int size, int& sum)
{
    int data;
    cout << "\nEnter " << size << " integers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        sum += data;
    }
    return sum / size;
}
double average( int size, double& sum)
{
    double data;
    cout << "\nEnter " << size << " doubles: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        sum += data;
    }
    return sum / size;
}
int main()
{
    int isum = 0;
    double dsum = 0.0;
    cout << average(10, isum) << " int average" << endl;
    cout << average(10, dsum) << " double average" << endl;
}
