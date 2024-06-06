#include<iostream>
using namespace std;

int main()
{
    int i,n;


    for(i=1;;){

        cin>>n;
int sum=0;
    for(i=1;i<=n;i++){
    if(i%2==0){
        sum=sum-i;
    }
    else{
        sum=sum+i;
    }

}
cout<<"Case" <<i<<":"<<sum<<endl;
}
}
