#include<iostream>
using namespace std;

int main()
{

    int m,n;
    int reverse=0;
    cout<<"enter the number: ";
    cin>>n;
    
    while(n!=0)
    {
        m=n%10;
        reverse=reverse*10+m;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}