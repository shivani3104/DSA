#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter the size of array"; //size
    cin>>n;

    int arr[n]; //array initalisation

    for(int i=0;i<n;i++) //array take values
    {
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"max value in array is: "<<max<<endl;

}