#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"enter the n1";
    cin>>n1;
    cout<<"enter the n2";
    cin>>n2;
    cout<<"enter the n3";
    cin>>n3;

    if(n1>n2 & n1>n3)
    {
        cout<<"n1 is greater";
    }
    else if(n2>n1 & n2>n3) 
    {
        cout<<"n2 is greater";
    }
    else if (n3>n1 & n3>n2)
    {
        cout<<"n3 is greater";
    }
    else
    {
        cout<<"all are same";
    }

}