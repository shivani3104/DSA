#include<iostream>
using namespace std;

int main()
{
    int y;
    cout<<"enter the year";
    cin>>y;

    if(y%4==0 & y%100!=0)
    {
        cout<<"it is leap year";
    }
    else if (y%400==0)
    {
        cout<<"it is leap year";
    }
    else
    {
        cout<<"it is not";
    }
    return 0;
}