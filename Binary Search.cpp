#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int arr[10], i, x,n, index;
    cout<<"Enter Number of Array : ";
    cin>>n;
    cout<<"\nEnter Array Elements : ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search in this array : ";
    cin>>x;

  int result = binarySearch(arr, x, 0, n - 1);
  if (result == -1)
    cout<<"Not found"<<endl;
  else
    cout<<"Element "<<x<<" is found at index : "<<result<<endl;
}
