#include<iostream>
using namespace std;

int main()
{
    int n1 , n2 , reverse=0,m;
    cout<<"enter n1: ";
    cin>>n1;

    n2=n1;
    while(n2!=0)
    {
        m=n2%10;
        reverse=reverse*10+m;
        n2=n2/10;
    }
    if(n1==reverse)
    {
        cout<<"it is palindrom";
    }
    else
    {
        cout<<"no palindrom";
    }
    
    return 0;
}