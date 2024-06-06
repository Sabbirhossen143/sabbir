#include<iostream>
using namespace std;

int main()
{
    int i,large=0,n;
    int a[100];
    cout<<"Enter Number of Elements: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout <<endl;

    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    cout <<endl;
    int small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    cout<<"The Maximum Element : "<<large<<endl;
    cout<<"The Minimum Element : "<<small<<endl;
}
