#include <stdio.h>
int main() {
  int N,B=0;
  int arr[100];
  scanf("%d",&N);

  for(int i=0;i<N;++i) {
    scanf("%d",&arr[i]);
  }
  int A=arr[0];
  for(int i=1;i<N;++i){
    if(A<arr[i]){
      A = arr[i];

  }
  }
    //printf("%d",A);

for(int i=0;i<N;i++) {
    printf("%d ",A-arr[i]);
}
  return 0;
}
