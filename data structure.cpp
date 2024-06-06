#include<iostream>
using namespace std;
main()
{
    int data[100]={23,43,5,6,3,4};
    int k,n=100,loc;
    for(k=0;k<n;k++)
    {
        if(data[0]<data[k])
        {


            data[0]=data[k];
    }
    }
 cout<<"Max : "<<data[0]<<endl;
 cout<<"Locatio : "<<loc;
}


