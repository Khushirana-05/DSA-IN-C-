//4,7,10,13,16..
#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int n=5;
    for(int i=1; i<n; i++)
    {
        cout<<a<<endl;
        a=a+3;
    }
    return 0;
}