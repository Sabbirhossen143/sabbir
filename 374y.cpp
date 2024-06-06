#include<bits/stdc++.h>
#include<string>
using namespace std;
main()
{
    string str;
    cin>>str;

    switch(str){
     case "Saturday":
           cout<<"Tuesday\n";
           break;
     case "Sunday":
         cout<<"Wednessday\n";
         break;
     case "Monday":
         cout<<"Thusday\n";
         break;
     case "Tuesday":
         cout<<"Friday\n";
         break;
     case "Wednessday":
         cout<<"Saturday\n";
         break;
     case "Thusday":
         cout<<"Sunday\n";
         break;
     case "Friday":
          cout<<"Monday\n";
          break;
}
}





