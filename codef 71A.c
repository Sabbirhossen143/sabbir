#include<stdio.h>
#include<string.h>
int main(){
char name[100];
int i,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
        int l=0;
fgets(name,sizeof(name),stdin);

l=strlen(name)-1;
if(l>=10){
    printf("%c%d%c\n",name[0],l-2,name[l-1]);

}
else
puts(name);
}
}
