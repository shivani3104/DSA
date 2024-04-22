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
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
//0000
//1111
//2222
//3333
//