#include<iostream>

using namespace std;

int main()
{
    int arr[100],n,i,iteam,p;
    cin>>n;
    cout<<"Enter value of an array element: "<<endl;
    for(i=0;i<n;i++)

        cin>>arr[i];

        cout<<"Enter an iteam to add this array : "<<endl;
        cin>>iteam;

        cout<<"Enter a position to add this iteam into array : ";
        cin>>p;
    for(i=n-1;i>=p-1;i--)
        arr[i+1]=arr[i];
    arr[p-1]=iteam;

    for(i=0;i<=n;i++)
      cout<<" "<<arr[i];
}
