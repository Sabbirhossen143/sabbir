#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10000],i,n,j;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    order(a,n);
}
void order(int a[10000],int n){
    int i,j,temp,x;
    float m,y;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
           	temp=a[j];
           	a[j]=a[j+1];
           	a[j+1]=temp;
		   }
        }
    }
    printf("\narray elements in ascending order:\n ");
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
if(n%2==0)
{
    x=n/2;
    y=(a[x]+a[x-1]);
    m=y/2;
    printf("The Median : %.2f",m);
}
else
{
x=n/2;
printf("The Median : %d",a[x]);
}
 }
