#include<iostream>
#include<string>
using namespace std;
int  main()
{
    int i;
    string str;
while(getline(cin,str))
{

    if (str=="Saturday"){
           cout<<"Tuesday"<<endl;
           }
     else if (str=="Sunday"){
         cout<<"Wednessday"<<endl;
     }
      else if (str=="Monday"){
         cout<<"Thusday"<<endl;
         }
      else if (str=="Tuesday"){
         cout<<"Friday"<<endl;
         }
      else if (str=="Wednessday"){
         cout<<"Saturday"<<endl;
         }
      else if (str=="Tuesday"){
         cout<<"Sunday"<<endl;
        }
      else if (str=="Friday"){
          cout<<"Monday"<<endl;
         }
}
}





