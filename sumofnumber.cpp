#include<iostream>
using namespace std;

//sum of digit in number;

int main()
{

    int n,m;
    int sum=0;

    cout<<"enter the n :";
    cin>>n;

   while(n>0)
   {
     m=n%10;
     sum=sum+m;
     n=n/10;
   }

   cout<<sum;
    return 0;
}