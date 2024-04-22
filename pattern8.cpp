#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n";
    cin>>n;
    int i=1;
    int count=1;

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;

        i++;
    }

}