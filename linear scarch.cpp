#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, i, num, index;
    cout<<"Enter Number of Array : ";
    cin>>n;
    cout<<"\nEnter Array Elements : ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search in this array : ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nArray element "<<num<<" found at index No."<<index<<endl;
    return 0;
}
