#include<iostream>
#include<stdlib.h>

using namespace std;

int main()

{
    while(1)
    {
    int n;
    int randomnumber= 1+rand()%10;
    cout<< "Enter your own number 1 to 10: ";
    cin>>n;
    if(randomnumber==n)
        cout<<"You are right"<<endl;
    else
        cout<<"You are not right"<<endl;
        cout<<"Please try again"<<endl;
        cout<<"The right number is : "<<randomnumber<<endl;
}
 }
