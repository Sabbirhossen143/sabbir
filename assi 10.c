#include<stdio.h>
int main()
{
    int n;
    char grade;
    scanf("%d",&n);
    grade=display(n);
    printf("%c",grade);
}
int display(int num)
{

    if(num>=0 && num<=39 )
        return 'F';
     if(num>=40 && num<=59 )
       return 'C';
    if(num>=60 && num<=79 )
        return 'B';
    if(num>=80 && num<=100 )
        return 'A';
}
