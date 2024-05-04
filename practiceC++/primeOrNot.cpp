#include<iostream>
using namespace std;
int main()
{
    int n, f=0;
    cout<<"enter the number: "<<endl;
    cin>>n;
    for(int i=2; i<n; i++)
    {
        if(n%i ==0)
        {
            f=1;
            break;
        }
    }
    if(f ==0)
    {
        cout<<"it is a prime no. ";
    }
    else
    {
        cout<<"it is not a prime no. ";   
    }
    return 0;
}