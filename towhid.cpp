
#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class display
{
    void login();
    void registr();
    void forgot();

    void number();
};

void display :: number()
{



    int choice;
    cout<<"***********************************************************************\\\";
        cout<<"                      Welcome to login page                               \\";
    cout<<"*****************        MENU        *******************************\\";
    cout<<"1.LOGIN"<<endl;
    cout<<"2.REGISTER"<<endl;
    cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"\Enter your choice :";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
    case 1:
        login();
        break;
    case 2:
        registr();
        break;
    case 3:
        forgot();
        break;
    case 4:

        cout<<"Thanks for using this program\This program is created by @harsha20599\\";
        break;
    default:
        system("cls");
        cout<<"You've made a mistake , give it a try again\"<<endl;
            main();
    }

}

void login()
{
    int count;
    string user,pass,u,p;
    system("cls");
    cout<<"please enter the following details"<<endl;
    cout<<"USERNAME :";
    cin>>user;
    cout<<"PASSWORD :";
    cin>>pass;

    ifstream input("database.txt");
    while(input>>u>>p)
    {
        if(u==user && p==pass)

        {
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<"\Hello"<<user<<"\LOGIN SUCESS\We're glad that you're here.\Thanks for logging in\";
            cin.get();
        cin.get();
        main();
    }
    else
    {
        cout<<"\LOGIN ERROR\Please check your username and password\";
            main();
    }
}

void registr()
{

    string reguser,regpass,ru,rp;
    system("cls");
    cout<<"Enter the username :";
    cin>>reguser;
    cout<<"\Enter the password :";
    cin>>regpass;

    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"\Registration Sucessful\";
        main();


}

void forgot()
{
    int ch;
    system("cls");
    cout<<"Forgotten ? We're here for help\";
        cout<<"1.Search your id by username"<<endl;
    cout<<"2.Search your id by password"<<endl;
    cout<<"3.Main menu"<<endl;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch)
    {
    case 1:
    {
        int count=0;
        string searchuser,su,sp;
        cout<<"\Enter your remembered username :";
        cin>>searchuser;

        ifstream searchu("database.txt");
        while(searchu>>su>>sp)
        {
            if(su==searchuser)
            {
                count=1;
            }
        }
        searchu.close();
        if(count==1)
        {
            cout<<"\\Hurray, account found\";
                cout<<"\Your password is "<<sp;
            cin.get();
            cin.get();
            system("cls");
            main();
        }
        else
        {
            cout<<"\Sorry, Your userID is not found in our database\";
                cout<<"\Please kindly contact your system administrator for more details \";
                cin.get();
            cin.get();
            main();
        }
        break;
    }
case 2:
    {
        int count=0;
        string searchpass,su2,sp2;
        cout<<"\Enter the remembered password :";
        cin>>searchpass;

        ifstream searchp("database.txt");
        while(searchp>>su2>>sp2)
        {
            if(sp2==searchpass)
            {
            }
            int main()
            {
                display obj;
                obj.number();
            }
