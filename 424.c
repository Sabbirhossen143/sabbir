#include<stdio.h>
#include<string.h>
int main(){
char h1,h2,m1,m2,c;
while(scanf("%s %s %s %s",&h1,&h2,&c,&m1,&m2)!=EOF){
        if(h1==0 && h2==0){
            printf("%s%s Minutes\n",m1,m2);
        }
        else if(m1==0 && m2==0){
            printf("%s%s Hours\n",h1,h2);
        }
        else if(h1==0 && h2==0 && m1==0 && m2==0){
            printf("\n");
        }
 else{
    printf("%s%s Hours %s%s Minutes\n",h1,h2,m1,m2);
}
    }

}
