#include<stdio.h>
int main()
{
  int M,N,D,P,Q,T,d,c,p1,d1,c1;
  scanf("%d %d %d %d %d %d",&M,&N,&D,&P,&Q,&T);

  d=(M*N*D);
  c=(T*P*d);
  p1=P+Q;
  d1=(M*N*d*P)/(p1*M*N);
  c1=(T*p1*d1);

  printf("Person : %d\n",P);
  printf("Days   : %d Days\n",d);
  printf("Charge : %d Taka\n",c);

  printf("\nPerson : %d\n",p1);
  printf("Days   : %d Days\n",d1);
  printf("Charge : %d Taka\n",c1);

  getch();
}
