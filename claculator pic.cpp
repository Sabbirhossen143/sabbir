#include<iostream>
using namespace std;
int main(){
int i, j,k;
cout<<endl;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=8; j++)
        {
            if(i==1 ||i==3|| i==4 || i==5|| i==6 ||i==7 || j==1 || j==8)
            {

                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
