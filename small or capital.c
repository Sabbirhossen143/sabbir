#include<stdio.h>
int main()
{
    char c;
    printf("Enter  any  letter= ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("This is a capital letter");
    else if(c>='a' && c<='z')
    printf("This is a small letter");
    else
    printf("This is not a letter");
    return  0;





}
