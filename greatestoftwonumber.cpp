#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"enter the number n1";
    cin>>n1;
    cout<<"enter the number n2";
    cin>>n2;
    if(n1>n2)
    {
        cout<<"n1 is greater";
    }
    else if (n2>n1)
    {
        cout<<"n2 is greater";
    }
    else
    {
        cout<<"both are same";
    }
    
    return 0;
}