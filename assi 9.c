#include <stdio.h>
int main()
{
  int arr[3][3],temp[3][3],i,j;
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      scanf("%d",&arr[i][j]);
      }
  }


  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++){
        temp[j][i]=arr[i][j];

  }
  }
  printf("\nThe transpose matrix is : \n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++){
            printf("%d ",temp[i][j]);
      }
      printf("\n");
  }

}
