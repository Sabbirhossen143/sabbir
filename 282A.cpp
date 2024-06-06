#include<iostream>
#include<string>
using namespace std;
int main(){
int t,x=0;
cin>>t;
string s;
while(t){
        cin>>s;
if(s=="++x" || s=="x++"){
    x++;
}
else{
    x--;
}
t--;
}
cout<<x;
}
