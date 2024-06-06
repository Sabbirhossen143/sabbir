#include<iostream>
using namespace std;
int main(){

int data[50]={9,8,7,6,5,4,3,2,1};
int n=9,k,PTR,a;

for(k=1;k<=n-1;k++){
    for(PTR=1;PTR<=n-k;){
        if(data[PTR]>data[PTR+1]){
          a=data[PTR];
          data[PTR]=data[PTR+1];
          data[PTR+1]=a;
          PTR++;
        }
    }
}
cout<<arr[PTR]<<" ";
}
