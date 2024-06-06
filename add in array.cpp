#include<iostream>
using namespace std;
int main(){

int arr[50]={2,4,67,2,34,64,2,1,2};
int i,total=9,ele=54,pos=5;

for(i=total;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[i]=ele;
    total++;

    for(i=0;i<total;i++){

        cout<<arr[i]<<" ";
    }
}
