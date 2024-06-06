#include<iostream>
using namespace std;
int main()
{

    int M,N;
   for(int i=0; ;i++){
        for(M=2;M<=1000;M++){
            for(N=2;N<=1000;N++){

   cin>>M>>N;

   cout<<M<<"*"<<N<<"="<<((M*N)-(M+N))<<endl;
}
}
}
}
