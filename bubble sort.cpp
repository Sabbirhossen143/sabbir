#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,n;
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

    for(i=0;i<n;i++)
    {
        for(j = i+1; j<n; j++){
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    cout<<"After Sorting this Array: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout <<endl;
}
