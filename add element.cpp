#include<iostream>
using namespace std;
int main()
{
    int arr[50]={1,2,35,7,8,4,56,6,5,9,8,67} ;
    int i, elem=15, pos=7, total=12;

    for(i=total; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    total++;

    cout<<"The New Array is:\n";
    for(i=0; i<total; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
