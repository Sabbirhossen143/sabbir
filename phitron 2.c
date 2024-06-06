#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
        if(b<a && b<c && b<d){
                printf("Largest = %d\n",a);
                printf("Smallest = %d\n",b);
        }
           else if(c<a && c<b && c<d){
                printf("Largest = %d\n",a);
                printf("Smallest = %d\n",c);
           }
           else if(d<a && d<b && d<c){
                printf("Largest = %d\n",a);
                printf("Smallest = %d\n",d);
           }

    }
    else if(b>a && b>c && b>d){
        if(a<b && a<c && a<d){
                printf("Largest = %d\n",b);
                printf("Smallest = %d\n",b);
        }
           else if(c<a && c<b && c<d){
                printf("Largest = %d\n",b);
                printf("Smallest = %d\n",c);
           }
           else if(d<a && d<b && d<c){
                printf("Largest = %d\n",b);
                printf("Smallest = %d\n",d);
           }

    }
    else if(c>a && c>b && c>d){
        if(b<a && b<c && b<d){
                printf("Largest = %d\n",c);
                printf("Smallest = %d\n",b);
        }
           else if(a<c && a<b && a<d){
                printf("Largest = %d\n",c);
                printf("Smallest = %d\n",a);
           }
           else if(d<a && d<b && d<c){
                printf("Largest = %d\n",c);
                printf("Smallest = %d\n",d);
           }

    }
    else{
        if(b<a && b<c && b<d){
                printf("Largest = %d\n",d);
                printf("Smallest = %d\n",b);
        }
           else if(a<c && a<b && a<d){
                printf("Largest = %d\n",d);
                printf("Smallest = %d\n",a);
           }
           else if(c<a && c<b && c<d){
                printf("Largest = %d\n",d);
                printf("Smallest = %d\n",c);
           }
    }

}
