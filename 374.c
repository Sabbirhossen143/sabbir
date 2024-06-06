#include<stdio.h>
#include<string.h>
int  main()
{
     char str;


while(scanf("%s",&str)){
    if (str=="Saturday"){
          printf("Tuesday");
           }
     else if (str=="Sunday"){
         printf("Wednessday");
     }
      else if (str=="Monday"){
        printf( "Thusday");
         }
      else if (str=="Tuesday"){
          printf("Friday");
         }
      else if (str=="Wednessday"){
          printf("Saturday");
         }
      else if (str=="Tuesday"){
          printf("Sunday");
        }
      else if (str=="Friday"){
           printf("Monday");
         }
}
}
