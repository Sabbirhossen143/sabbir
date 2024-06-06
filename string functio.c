#include <stdio.h>
#include <string.h>
void st(char s[100])
{
int f,i;
	for(i=0;i<='\0';i++){
     f=0;
	if(s[i]!='0' || s[i]!='1')
		f++;
      break;
	}
	if(f!=0)
    {
	printf ("NO\n");
	}
    else
		printf("YES\n");

}
int main()
{
    int i;
	char n[100];
	scanf("%s",n);
	st(n);
}
