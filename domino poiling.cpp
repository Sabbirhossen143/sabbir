#include<iostream>
using namespace std;
int main(){
int M,N,a=0,x;
cin>>M>>N;
a=M*N;
if(a%2==0)
x=a/2;
else{
    a=a-1;
    x=a/2;
}
    cout<<x;

}
