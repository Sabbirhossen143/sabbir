#include<iostream>
using namespace std;

class calculator
{
public:
void display();
};

void calculator::display()
{
    char a;
    double num1,num2;
    cout<<"Hello ! user!!!"<<endl;
    cout<<"I am a calculator which made by Sabbir Hossen";
    cout<<"Enter an operator(+,-,*,/) : ";
    cin>>a;
    cout<<"Enter two number : ";
    cin>>num1>>num2;

    switch (a)
    {
    case '+':
        {
          cout<<num1<<" + "<<num2<<" = "<<num1+num2;
          break;
        }
    case '-':
        {
         cout<<num1<<" - "<<num2<<" = "<<num1-num2;
          break;
        }
    case '*':
        {
         cout<<num1<<" * "<<num2<<" = "<<num1*num2;
          break;
        }
    case '/':
        {
          cout<<num1<<" / "<<num2<<" = "<<num1/num2;
          break;
        }
    default:
       cout<<"you are not type an operator";

    }
}
 int main(){

       calculator obj;
       obj. display();
    }

