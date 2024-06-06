#include<iostream>
using namespace std;
int main(){
int a,b,c,count=0,n,i;
cin>>n;
for(i=1;i<=n;i++){
    cin>>a>>b>>c;
    if(a+b+c>=2){
        count++;
        }
}
    cout<<count<<endl;
}
