#include<iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1; 1<=n; i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}