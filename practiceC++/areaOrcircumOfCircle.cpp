#include<iostream>
using namespace std;
int main()
{
    int area,r, circumference;
    cout<<"enter the Radius"<<endl;
    cin>>r;
    circumference =2*3.14*r;
    area =3.14*r*r;
    if(area>circumference)
    {
    cout<<"area is greater ";
    }
    else
    {
        cout<<"circumference is greater";
    }
    return 0;
}