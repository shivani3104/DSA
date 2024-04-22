#include<iostream>
using namespace std;

int main()
{
    int i=0;
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;

    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
    
    return 0;
}

/****
****
****
****/