#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter number of element";
    cout<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int k=1; k<n; k++)
    {
        int nxt = arr[k];
        int j= k-1;
        while(j>=0 && nxt <= arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = nxt;

        cout<<k<<" iteration : ";
        for(int i=0; i<n; i++)
        {
            cout <<arr[i] << " ";
        }
        cout<<endl;
    }
    cout<<"\nFinal Sorted list is : ";
    for(int i=0; i<n; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout<<endl;
}
