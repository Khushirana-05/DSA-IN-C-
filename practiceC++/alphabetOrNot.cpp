#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"enter the character "<<endl;
    cin>>character;
    if((character>='a'&& character<='z')||(character>='A'&& character<='Z'))
    {
        cout<<character<<" is a alphabet"<<endl;
    }
    else
    {
        cout<<character<<" is not a alphabet";
    }
    return 0;
}