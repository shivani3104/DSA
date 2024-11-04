#include<iostream>
using namespace std;

int main()
{
    int n1 , n2 , armstrong=0,m;
    cout<<"enter n1: ";
    cin>>n1;

    n2=n1;
    while(n2!=0)
    {
        m=n2%10;
        armstrong += m*m*m;
        n2=n2/10;
    }
    if(armstrong==n1)
    {
        cout<<"it is armstrong";
    }
    else
    {
        cout<<"no palindrom";
    }
    
    return 0;
}