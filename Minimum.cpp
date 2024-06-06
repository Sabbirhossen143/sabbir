#include<iostream>
using namespace std;

int main()
{
    int i,small=0,n;
    int a[100];
    cout<<"Enter Number of Array : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter Array elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout <<endl;
    small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    cout<<"The smallest value in this array : "<<small<<endl;
}
