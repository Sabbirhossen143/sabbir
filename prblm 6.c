#include <stdio.h>
int main(){
  int N, i,j,T;
  scanf("%d",&T);

  for(j=0;j<T;j++){
  scanf("%d",&N);
  int flag=0;
if (N==0 || N== 1)
    flag=1;
else{
  for (i = 2; i <= N / 2; ++i) {

    if (N % i == 0) {
      flag = 1;
      break;
    }
}
}
  if (flag == 0)
    printf("Yes\n");
  else
    printf("No\n");

}
}
