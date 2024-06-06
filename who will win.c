#include<stdio.h>
int main()
{
    int A,B,i;
    int c=0,d=0;
    char S1[10],S2[10];
scanf("%d %d",&A,&B);

if(A>B)
    printf("Argentina\n");

if(B>A)
    printf("Brazil\n");
   if(A==B)
   {
while(c==d){
       scanf("%s\n %s",S1,S2);

       for(i=0;i<5;i++)
       {
           if(S1[i]=='1')
            c++;
       }
       for(i=0;i<5;i++)
       {
           if(S2[i]=='1')
            d++;
       }
       }

     if(c>d)
            printf("Argentina");
     else if(c<d)
        printf("Brazil\n");

}
}

