#include<iostream>
#include<cmath>
using namespace std;

class calculator
{
public:
    void display();
};

void calculator::display()
{
    char a;
    string S;
    double num1,num2;
    int num,num3;
    cout<<"Hello ! user!!!"<<endl;
    cout<<"I am a calculator which made by Sabbir Hossen student of BGC trust university,Bangladesh."<<endl;
cout<<endl;
    int i, j,k;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=8; j++)
        {
            if(i==1 ||i==3|| i==4 || i==7 || i==5 || i==6 || j==1 || j==8)
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
    cout<<endl;
    cout<<"If You want to use me to calculate anything!!!"<<endl;
    cout<<"Press Yes or not press No"<<endl;
    cin>>S;
    if(S=="Yes")
    {
        cout<<"Please,Enter your choice(1-9) : "<<endl;
        cout<<"enter 1  : If you want to Add two number ->"<<endl;
        cout<<"enter 2  : If you want to Substract two number ->"<<endl;
        cout<<"enter 3  : If you want to Multiply two number ->"<<endl;
        cout<<"enter 4  : If you want to Divid two number ->"<<endl;
        cout<<"enter 5  : If you want to remainder two number ->"<<endl;
        cout<<"enter 6  : If you want to the value of 2's power ->"<<endl;
        cout<<"enter 7  : If you want to the value for sin ->"<<endl;
        cout<<"enter 8  : If you want to transfer a Binary number into Decimal ->"<<endl;
        cout<<"enter 9  : If you want to transfer a Decimal number into Binary ->"<<endl;

        cin>>a;


        switch (a)
        {
        case '1':
        {
            cout<<"Please # Enter two number : "<<endl;
            cin>>num1>>num2;
            cout<<"Processing....."<<endl;
            cout<<"The Result : "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        case '2':
        {
            cout<<"Please # Enter two number : "<<endl;
            cin>>num1>>num2;
            cout<<"Processing....."<<endl;
            cout<<"The Result : "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            cout<<"Finished"<<endl;
            break;
        }
        case '3':
        {
            cout<<"Please # Enter two number : "<<endl;
            cin>>num1>>num2;
            cout<<"Processing....."<<endl;
            cout<<"The Result : "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        case '4':
        {
            cout<<"Please # Enter two number : "<<endl;
            cin>>num1>>num2;
            cout<<"Processing....."<<endl;
            cout<<"The Result : "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        case '5':
        {
            cout<<"Please # Enter two number : "<<endl;
            cin>>num>>num3;
            cout<<"Processing....."<<endl;
            cout<<"The Result : "<<num<<" % "<<num3<<" = "<<num%num3<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        case '6':
        {
            cout<<"Please # Enter a number : "<<endl;
            cin>>num;
            cout<<"Processing....."<<endl;
            cout<<"The value of 2's power of "<<num<<" is = "<<pow(2,num)<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        case '7':
        {
            cout<<"Please # Enter a number : "<<endl;
            cin>>num;
            cout<<"Processing....."<<endl;
            cout<<"The Result : sin("<<num<<") = "<<sin(num);
            cout<<"Finished."<<endl;
            break;
        }
        case '8':
        {
            cout<<"Please # Enter a Binary number : "<<endl;
            cin>>num;
            int n=num;
            int dec = 0, i = 0, rem;

            while (num!=0)
            {
                rem = num % 10;
                num /= 10;
                dec += rem * pow(2, i);
                ++i;
            }
            cout<<"Processing....."<<endl;
            cout<<"The Decimal number of "<<n<<" is : "<<dec<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        case '9':
        {
            cout<<"Please # Enter a Decimal number : "<<endl;
            cin>>num;
            int n=num;
            int bin = 0;
            int rem, i = 1;

            while (n!=0)
            {
                rem = n % 2;
                n /= 2;
                bin += rem * i;
                i *= 10;
            }
            cout<<"Processing....."<<endl;
            cout<<"The Binary number of "<<num<<" is : "<<bin<<endl;
            cout<<"Finished."<<endl;
            break;
        }
        default:
            cout<<"Sorry!! You enter "<<a<<" which is not store into my knowledge"<<endl;
        }
    }
    else if(S=="No")
    {
        cout<<endl;
        cout<<"@ Thank You @"<<endl;
        cout<<"Don't Forget me!!"<<endl;
    }
}
int main()
{

    calculator obj;
    obj. display();
}


