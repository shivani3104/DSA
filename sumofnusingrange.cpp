#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    int sum=0;
    cout<<"enter the first number";
    cin>>n1;
    cout<<"enter the number of numbers";
    cin>>n2;

    for(int i=n1;i<=n2;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}