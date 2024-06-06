#include<stdio.h>
int main(){

  float A,B,C;
  double T,R,S,T1,R1,pi;
  scanf("%f %f %f",&A,&B,&C);

  pi = 3.14159;

  T=.5*A*C;
  R=pi*(C*C);
  T1=(A+B)/2*C;
  S=B*B;
  R1=A*B;



  printf("TRIANGULO: %.3lf\n",T);
  printf("CIRCULO: %.3lf\n",R);
  printf("TRAPEZIO: %.3lf\n",T1);
  printf("QUADRADO: %.3lf\n",S);
  printf("RETANGULO: %.3lf\n",R1);



  return 0;
}
