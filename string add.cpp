#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m;
    cin>>m;
    string s;
    string result;

    for(int i=1;i<=m+1;i++)
    {
        getline(cin,s);
        cout<<endl;
        if (i > 2)
            {
            result += " ";
            }
        result += s;
    }
cout<<result <<endl;
}
