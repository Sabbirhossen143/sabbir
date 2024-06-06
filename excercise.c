#include <stdio.h>

int main() {

  char op[20];
  double a,b,x,y;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%s", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);
int sum=0;
  switch (op[20]) {
    case '+':
      x=a+b;

    case '*':
      y=a*b;
  }
sum=x+y;
printf("%d",sum);
  return 0;
}

