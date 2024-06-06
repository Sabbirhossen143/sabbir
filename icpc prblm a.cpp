#include<iostream>
#include<string>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];
    string s(m,'B');

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int x=arr[i];
        int y=m+1-arr[i];
        if(x<y){
            if(s[x-1]=='B') s[x-1]='A';
            else s[y-1]=='A';
        }
        else{
            if(s[y-1] =='B') s[y-1]='A';
            else s[x-1] = 'A';
        }
    }
    cout<<s<<endl;
}
return 0;
}
