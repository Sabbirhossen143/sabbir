#include<stdio.h>
int main()
{
   int mark;
   printf("enter a mark = ");
   scanf("%d",&mark);
   if(mark>100 || mark<0)
        printf("invalid mark");
   else if(mark>=80 && mark<=100)
        printf("the mark is A+");
   else if(mark>=70 && mark<=79)
        printf("the mark is A");
   else if(mark>=60 && mark<=69)
        printf("the mark is A-");
   else if(mark>=50 && mark<=59)
        printf("the mark is B");
   else if(mark>=40 && mark<=49)
        printf("the mark is C");
   else if(mark>=33 && mark<=39)
        printf("the mark is D");
   else
        printf("Fail");
   return 0;









}
